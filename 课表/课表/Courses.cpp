#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>
#include<chrono>
#include <sstream>
#include <fstream>
#include <ostream>
#include <cstring>
#include "Courses.h"


string Student::getName()
{
	return name;
}

string Student::getNum()
{
	return num;
}

int Courses::getScoreSum()
{
	auto iter = aMap.begin();
	float scoreSum = 0;
	while (iter != aMap.end())
	{
		if (iter->second.choice == 1)
		{
			scoreSum += iter->second.score;
		}
	}
	return scoreSum;
}

vector<vector<int>> Courses::getCoursesReduced()
{
	return coursesOfReduced;
}

unordered_map<int, Courses::CS> Courses::getAMap()
{
	return aMap;
}

unordered_map<int, string*>Courses::getTimeIndex()
{


	return timeIndex;
}
Courses::CS Courses::searchIndex(int i)
{
	if (aMap.find(i) != aMap.end())
	{
		return aMap[i];;
	}
}

string Courses::getCoursesName(int i)
{
	return aMap[i].name;
}


string trim(string& str)
//删除字符串中空格，制表符tab等无效字符
{
	str.erase(0, str.find_first_not_of("\t\r\n"));
	str.erase(str.find_last_not_of("\t\r\n") + 1);
	return str;
}

bool ifArrayEqual(vector<string*> i,vector<string*> j)
{
	bool result = 1;
	if (i.size() != j.size())
	{
		result = 0;
	}
	else
	{
		for (unsigned int count = 0; count < i.size(); ++count)
		{
			if (i[count] != j[count])
			{
				result = 0;
			}
		}
	}

	return result;
}

void Courses::inputInfo()
{
	string* time = new string[10];
	time[0] = "1-2";
	time[1] = "1-3";
	time[2] = "3-4";
	time[3] = "3-5";
	time[4] = "4-5";
	time[5] = "6-7";
	time[6] = "6-8";
	time[7] = "8-9";
	time[8] = "11-12";
	time[9] = "11-13";
	string* day = new string[6];
	day[0] = "1-";
	day[1] = "2-";
	day[2] = "3-";
	day[3] = "4-";
	day[4] = "5-";
	day[5] = "6-";
	vector<string> courses;
	for (int j = 0; j < 6; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			courses.push_back(day[j] + time[i]);
		}
	}
	for (unsigned int i = 0; i < courses.size(); ++i)
	{
		timeIndex[i] = &courses[i];
	}
	string filename = "Courses.csv";
	ifstream fin;
	fin.open(filename.c_str());
	string line;
	int index = 0;
	if (!fin)
	{
		printf("文件打开失败");
	}
	else
	{
		while (getline(fin, line))
		{
			istringstream sin(line);
			vector<string> fields;
			string field;
			while (getline(sin, field, ','))
			{
				fields.push_back(field);
			}
			int length = fields.size();
			aMap[index].name = trim(fields[1]);
			aMap[index].num = trim(fields[2]).c_str();
			aMap[index].score = (double)atof(trim(fields[4]).c_str());
			aMap[index].teacher = trim(fields[3]);
			aMap[index].index = atoi(trim(fields[0]).c_str());
			for (int i = 5; i < length; ++i)
			{
				aMap[index].time.push_back(timeIndex[atoi(trim(fields[i]).c_str())]);
			}
			index++;
		}
	}
	int length = aMap.size();
	//开始输入资料
	//开始筛选资料
	for (int i = 0; i < length; i++)
	{
		vector<int> forInput;
		vector<int> forInput2;
		if (aMap[i].electionForReduction == 1)
		{
			continue;
		}
		else
		{
			forInput.push_back(aMap[i].index);
			for (int j = 0; j < length; j++)
			{
				if (j == i)
				{
					continue;
				}
				else if (ifArrayEqual(aMap[i].time, aMap[j].time))
				{
					forInput.push_back(aMap[j].index);
					aMap[j].electionForReduction = 1;
				}
			}
		}
		aMap[i].electionForReduction = 1;
		int forInputSize = forInput.size();
		if (forInputSize > 1)
		{
			for (int i = 0; i < forInputSize; i++)
			{
				if (aMap[i].electionForReduction2 == 1)
				{
					continue;
				}
				for (int j = 0; j < forInputSize; j++)
				{
					if (i != j)
					{
						if (aMap[i].name == aMap[j].name)
						{
							aMap[j].electionForReduction2 = 1;
						}
					}
				}
				if (aMap[i].electionForReduction2 == 0)
				{
					forInput2.push_back(forInput[i]);
				}
			}
		}
		else
		{
			forInput2 = forInput;
		}
		coursesOfReduced.push_back(forInput2);
	}
	fin.close();
	filename = "CoursesOfReduced.csv";
	ofstream fout;
	fout.open(filename);
	int sizeOfCoursesOfReduced = coursesOfReduced.size();
	if (!fout)
	{
		printf("文件打开失败");
	}
	else
	{
		for (int i = 0; i < sizeOfCoursesOfReduced; i++)
		{
			for (unsigned int j = 0; j < coursesOfReduced[i].size(); j++)
			{
				fout << coursesOfReduced[i][j] << ',';
			}
			fout << endl;
		}
	}
	fout.close();

	//调试用
	/*auto iter = aMap.begin();
	while (iter != aMap.end())
	{
		cout << iter->second.name << "        " << iter->second.num << "        " << iter->second.score << "        "
			<< iter->second.teacher << "        " << iter->second.index << "        ";
		for (unsigned int i = 0; i < iter->second.time.size(); ++i)
		{
			cout << *(iter->second.time[i]) << "        ";
		}
		cout << endl;
		++iter;
	}
	
	for (unsigned int i = 0; i < coursesOfReduced.size(); ++i)
	{
		for (unsigned int j = 0; j < coursesOfReduced[i].size(); j++)
		{
			cout << coursesOfReduced[i][j] << "   ";
		}
		cout << endl;
	}*/
}