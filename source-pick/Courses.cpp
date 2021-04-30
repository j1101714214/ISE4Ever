
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


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


Courses crs;
template < class T > void ClearVector(vector< T >& vt) { vector< T > vtTemp; vtTemp.swap(vt); }

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
}//To get the total score.

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
    if (aMap.find(i-1) != aMap.end())
	{
        return aMap[i-1];;
	}
    else{return aMap[0];}
}   //Get the value of an item via index.

string Courses::getCoursesName(int i)
{
	return aMap[i].name;
}


string trim(string& str)
//delete the space or tab characters.
{
	str.erase(0, str.find_first_not_of("\t\r\n"));
	str.erase(str.find_last_not_of("\t\r\n") + 1);
	return str;
}

bool ifArrayEqual(vector<string*> i,vector<string*> j) //To know if two arrays are similar.
{
	bool result = 1;
	if (i.size() != j.size())
	{
		result = 0;
	}
	else
	{
        for (unsigned int count = 0; count < i.size(); ++count) //to compare all the elements in arrays
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
    static vector<string> courses;
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
    } //To store the time info in an array.
	string filename = "Courses.csv";
	ifstream fin;
	fin.open(filename.c_str());
	string line;
    index = 0;
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
            } //to get info in each line.
			int begin = atoi(trim(fields[0]).c_str());
			if (begin != 0)
			{
				int length = fields.size();
				aMap[index].name = trim(fields[1]);
				aMap[index].num = trim(fields[2]).c_str();
				aMap[index].score = (double)atof(trim(fields[4]).c_str());
				aMap[index].teacher = trim(fields[3]);
				aMap[index].index = begin;
                if (length > 6)
                {
                    for (int i = 5; i < (int)length; ++i)
                    {
                        for (int j = i + 1; j < (int)length; j++)
                        {
                            if (atoi(trim(fields[i]).c_str()) > atoi(trim(fields[j]).c_str()))
                            {
                                string k = trim(fields[j]).c_str();
                                fields[j] = trim(fields[i]).c_str();
                                fields[i] = k;
                            }
                        }
                    }
                } //Sort from small to large.
                for (int i = 5; i < (int)length; ++i)
                {
                    aMap[index].time.push_back(timeIndex[atoi(trim(fields[i]).c_str())]);//to input the time infomation.
                }
				index++;
			}
			else
			{
				continue;
			}
		}
    } //To read and input the info of courses from .csv files.
	int length = aMap.size();
	//开始输入资料
    //开始筛选资料(助教姐姐好好看)
	for (int i = 0; i < length; i++)
	{
		vector<int> forInput;
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
        }//divede info into different groups by timeIndex.
		aMap[i].electionForReduction = 1;
        //int forInputSize = forInput.size();
		coursesOfReduced.push_back(forInput);
	}
	fin.close();
}

int Courses::gettotal(){
    return index;
}
string Courses::getCoursesNum(int i){
    return aMap[i].num;
}
string Courses::getCoursesTeacher(int i){
    return aMap[i].teacher;
}
string Courses::getCoursesBool(int i){
    bool reduce=aMap[i].electionForReduction;
    if (reduce){return "true";}
    else {return "false";}
}
void Courses::setCoursesBool(int i,bool s){
    aMap[i].electionForReduction=s;
}

vector<vector<int>> Courses::getCoursesOfRedecued(int i)
{   if(coursesOfReduced3.size()!=0)
	return coursesOfReduced3[i];
    else
    {vector<vector<int>> none;return none;}

}

void Courses::setCoursesOfRedecued()
//to delete the infomation which is set into "false" by user.
{
    for (int i = 0; i < (int)aMap.size(); i++)
    {
        aMap[i].electionForReduction2 = 0;
    }
    coursesOfReduced2.clear();
    coursesOfReduced3.clear();
    for (int i = 0; i <(int) coursesOfReduced.size(); ++i)
	{
		vector<int> forInput2;
        for (int j = 0; j < (int)coursesOfReduced[i].size(); ++j)
		{
			if (searchIndex(coursesOfReduced[i][j]).electionForReduction == true)
			{
				forInput2.push_back(coursesOfReduced[i][j]);
			}
			else
			{
				continue;
			}
		}
		if (forInput2.size() > 0)
		{
			coursesOfReduced2.push_back(forInput2);
		}
		else
		{
			continue;
        };

	}
    //ClearVector(coursesOfReduced);

    //to divide info in different groups by the first time info.
	for (int i = 0; i < 60; ++i)
	{
		vector<vector<int>> forInput3;
        for (int j = 0; j < (int)coursesOfReduced2.size(); ++j)
		{
			if (searchIndex(coursesOfReduced2[j][0]).electionForReduction2 == 1)
			{
				continue;
			}
			else
			{
                if (searchIndex(coursesOfReduced2[j][0]).time[0] == timeIndex[i])
				{
					forInput3.push_back(coursesOfReduced2[j]);
					setelectionForReduction2(coursesOfReduced2[j][0]);
				}
				else
				{
					continue;
				}
			}
		}
		coursesOfReduced3.push_back(forInput3);
    }
    //ClearVector(coursesOfReduced2);

}
void Courses::setelectionForReduction2(int i){
    aMap[i-1].electionForReduction2=1;
}


vector<int> Courses::getFileInfo(int index)
{
    return fileInfo[index-1];   //get info the file reduced
}

void Courses::setFileInfo(int i)    //input the info of the specific file.
{
    fileInfo.clear();
    string filename = "./result/result" + to_string(i);
    //cout << filename;
    ifstream fin;
    fin.open(filename.c_str());
    string line;
    vector<vector<int>> tempVector;
    if (!fin)
    {
        printf("文件打开失败");
    }
    else
    {
        while (getline(fin, line))
        {
            istringstream sin(line);
            vector<int> fields;
            string field;
            while (getline(sin, field, ','))
            {
                fields.push_back(atoi(trim(field).c_str()));
            }
            tempVector.push_back(fields);
        }
    }
    for (int i = 1; i < (int)tempVector.size() - 1; ++i)
    {
        fileInfo.push_back(tempVector[i]);
    }
}
