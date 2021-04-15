#pragma once
#include <unordered_map>
#include <vector>
#include <string>
#include <cstring>
#ifndef COURSES_H
#define COURSRS_H
using namespace std;

class Student //学生的登录注册
{
private:
	string name;
	string num;
public:
	string getName();
	string getNum();
	//Student(string InName,string InNum);
};

class Courses: public Student //用于课程排序和敷衍老师
{
private:
	struct custom_hash {};
	int scoreSum;
	vector<vector<int>> coursesOfReduced;
	unordered_map<int, string*> timeIndex;
	unordered_map<int, string*> nameIndex;
	typedef struct detailCoursesInfo
	{
		bool electionForReduction = 0;
		bool electionForReduction2 = 0;
		bool choice = 0;
		int index = 0;
		string num = "0";
		float score = 0;
		string name = "";
		vector<string*> time;
		string teacher = "";
	}CS;
	unordered_map<int, CS> aMap;
	string getCoursesName(int i);
public:
	void inputInfo();
	int getScoreSum();
	CS searchIndex(int i);
	vector<vector<int>> getCoursesReduced();
	unordered_map<int, string*>getTimeIndex();
	unordered_map<int, CS> getAMap();
};



#endif
