
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#pragma once
#include <unordered_map>
#include <vector>
#include <string>
#include <cstring>
#ifndef COURSES_H
#define COURSRS_H
using namespace std;
class Student  //
{
private:
	string name;
	string num;
public:
	string getName();
	string getNum();
	//Student(string InName,string InNum);
};

class Courses: public Student
{
public:
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
	void inputInfo();
	int getScoreSum();
	CS searchIndex(int i);
	vector<vector<int>> getCoursesReduced();
	unordered_map<int, string*>getTimeIndex();
	unordered_map<int, CS> getAMap();
    int gettotal();
    string getCoursesName(int i);
    string getCoursesNum(int i);
    string getCoursesTeacher(int i);
    string getCoursesBool(int i);
    void setCoursesBool(int i,bool s);
	vector<vector<int>> getCoursesOfRedecued(int i);
	void setCoursesOfRedecued();
    void setFileInfo(int i);
    vector<int> getFileInfo(int index);
private:
	struct custom_hash {};
	int scoreSum;
	int index;
	vector<vector<int>> coursesOfReduced;
	vector<vector<int>> coursesOfReduced2;
    vector<vector<vector<int>>> coursesOfReduced3;
    vector<vector<int>> fileInfo;
	unordered_map<int, string*> timeIndex;
	unordered_map<int, string*> nameIndex;
	unordered_map<int, CS> aMap;
	void setelectionForReduction2(int i);
};



#endif
