
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#ifndef SERCH_H
#define SERCH_H


#include <cstdio>
#include <iostream>
#include "Courses.h"
#include <ostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <stdlib.h>
#include <direct.h>
class SearchFun{
public:
    static int dividestring(string line,int mount,char split);        //divide string by split and return a int
    static bool searchSteps(int depth, int branch);        //back-track algorithm. In order to give out a reasonable timetable possibility
    static void SearchMain();        // to start search,do sth. important before searching by the way.
    static int getTotal();        //return total of possibilities
};

int readDir();        //read dir.if none then make a new one.


#endif // SERCH_H
