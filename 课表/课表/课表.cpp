#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include "Courses.h"
using namespace std;

int main()
{
    system("chcp 65001");
    Courses c;
    c.inputInfo();
    cout << c.searchIndex(12).name;
}

