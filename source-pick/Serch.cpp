
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#include <cstdio>
#include <iostream>
#include "Courses.h"
#include <ostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <stdlib.h>
#include<Serch.h>
#include<QDir>


bool CMap[7][14]={{false}};        //back-trace flags map
extern Courses crs;                //get object crs from init part
vector<vector<int>> Final(92);     //timetable storage(step recorder)
vector<int> none;                  //an empty vector for del
int indextotal=0;                  //record total of courses
int resultamount=0;                //record result amount




void SearchFun::SearchMain(void){
    memset(CMap,true,sizeof(CMap));       //set flags to true
    resultamount=0;                       //set total =0
    crs.setCoursesOfRedecued();           //call course to make the waiting queue
    _chdir("./result");                   //set output dir as ./result
    searchSteps(0,0);                     //back-trace search
    _chdir("../");                        //chdir to beginning
}



//start from 0;
bool SearchFun::searchSteps(int depth, int branch){
    if(depth>=60){return false;}        //in case depth out of range
    if(branch>(int)crs.getCoursesOfRedecued(depth).size()){return false;}       //in case branch out of range
    if(branch==-1)
    {
        if (depth==59){
            //print result
            string filename="result"+to_string(resultamount);
            FILE* fp=fopen(filename.c_str(),"w");
            for(int i=0;i<92;i++){
                for(int j=0;j<(int)Final[i].size();j++)
                {fprintf(fp,"%d,",Final[i][j]);}
               fprintf(fp,"\n");
            }
            fclose(fp);
            resultamount++;
            return true;
        }//the end,output
        //cout<<"depth:"<<depth<<"branch:"<<branch<<endl;//for test
        int m2=(int)crs.getCoursesOfRedecued(depth+1).size();
        if(m2==0){searchSteps(depth+1,-1);}
        for (int i=0;i<m2;i++){
            if(searchSteps(depth+1,i)){continue;}else{break;}}
        return true;
    }//current time has no courses,search next or output
    bool statuss=false;
    Courses::CS current;
    if(crs.getCoursesOfRedecued(depth).size()!=0)
    {current = crs.searchIndex(crs.getCoursesOfRedecued(depth)[branch][0]);}//get index0 as compare object

    for(int i=0;i<(int)current.time.size();i++){       //for muti-time course,here must be a loop
    int begi = dividestring(*current.time[i],1,'-');
    int week = dividestring(*current.time[i],0,'-');
    int endi = dividestring(*current.time[i],2,'-');
    switch(endi-begi){
    case 1:{
        if(CMap[week][begi]&&CMap[week][begi+1]){
            CMap[week][begi]=false;CMap[week][begi+1]=false;
            Final.erase(Final.begin()+(week-1)*13+begi);
            Final.erase(Final.begin()+(week-1)*13+begi);
            Final.insert(Final.begin()+(week-1)*13+begi,crs.getCoursesOfRedecued(depth)[branch]);
            Final.insert(Final.begin()+(week-1)*13+begi,crs.getCoursesOfRedecued(depth)[branch]);
            statuss=true;
            break;
        }else {statuss=false;break;}}//2-legth solution
    case 2:{if(CMap[week][begi]&&CMap[week][begi+1]&&CMap[week][begi+2]){CMap[week][begi]=false;CMap[week][begi+1]=false;CMap[week][begi+2]=false;
            Final.erase(Final.begin()+(week-1)*13+begi);
            Final.erase(Final.begin()+(week-1)*13+begi);
            Final.erase(Final.begin()+(week-1)*13+begi);
            Final.insert(Final.begin()+(week-1)*13+begi,crs.getCoursesOfRedecued(depth)[branch]);
            Final.insert(Final.begin()+(week-1)*13+begi,crs.getCoursesOfRedecued(depth)[branch]);
            Final.insert(Final.begin()+(week-1)*13+begi,crs.getCoursesOfRedecued(depth)[branch]);
            statuss=true;
            break;

        }else {statuss=false;break;}}//3-legth solution
    }
    if(statuss){continue;}else{if(i>0){int j=i-1;for(;j>=0;j--){
                int begij = dividestring(*current.time[j],1,'-');
                int weekj = dividestring(*current.time[j],0,'-');
                int endij = dividestring(*current.time[j],2,'-');
                switch(endij-begij){
                case 1:{
                    CMap[weekj][begij]=true;CMap[weekj][begij+1]=true;
                    Final.erase(Final.begin()+(weekj-1)*13+begij);
                    Final.erase(Final.begin()+(weekj-1)*13+begij);
                    Final.insert(Final.begin()+(weekj-1)*13+begij,none);
                    Final.insert(Final.begin()+(weekj-1)*13+begij,none);
                        break;
                    }//
                case 2:{CMap[weekj][begij]=true;CMap[weekj][begij+1]=true;CMap[weekj][begij+2]=true;
                    Final.erase(Final.begin()+(weekj-1)*13+begij);
                    Final.erase(Final.begin()+(weekj-1)*13+begij);
                    Final.erase(Final.begin()+(weekj-1)*13+begij);
                    Final.insert(Final.begin()+(weekj-1)*13+begij,none);
                    Final.insert(Final.begin()+(weekj-1)*13+begij,none);
                    Final.insert(Final.begin()+(weekj-1)*13+begij,none);
                        break;
                }}
            }break;}else{break;}}//in case that a muti-class is not valid on current branch,we have to del what we just write before
    }//here we get a possible solution of current depth

    //cout<<"depth:"<<depth<<"branch:"<<branch<<endl; //for test


//find next depth
    if (depth==59){
        //print result
        string filename="result"+to_string(resultamount);
        FILE* fp=fopen(filename.c_str(),"w");
        for(int i=0;i<92;i++){
            for(int j=0;j<(int)Final[i].size();j++)
            {fprintf(fp,"%d",Final[i][j]);}
           fprintf(fp,"\n");
        }
        fclose(fp);
        resultamount++;
    }//output
    if(depth<59)
    {
        int m2=(int)crs.getCoursesOfRedecued(depth+1).size();
        if(m2==0){searchSteps(depth+1,-1);}
        for (int i=0;i<m2;i++){
            if(searchSteps(depth+1,i)){continue;}else{break;}}
       //find next
    }
    //trace back ,del what we have done in this function
    if (statuss)
    {

        for(int i=0;i<(int)current.time.size();i++){

    int begi = dividestring(*current.time[i],1,'-');
    int week = dividestring(*current.time[i],0,'-');
    int endi = dividestring(*current.time[i],2,'-');
    switch(endi-begi){
    case 1:{
        CMap[week][begi]=true;CMap[week][begi+1]=true;
        Final.erase(Final.begin()+(week-1)*13+begi);
        Final.erase(Final.begin()+(week-1)*13+begi);
        Final.insert(Final.begin()+(week-1)*13+begi,none);
        Final.insert(Final.begin()+(week-1)*13+begi,none);
            /*Final.insert(Final.begin()+(week-1)*13+begi-1,none);
            Final.erase(Final.begin()+(week-1)*13+begi+1);
            Final.insert(Final.begin()+(week-1)*13+begi,none);
            Final.erase(Final.begin()+(week-1)*13+begi+2);*/
            break;
        }//
    case 2:{CMap[week][begi]=true;CMap[week][begi+1]=true;CMap[week][begi+2]=true;
        Final.erase(Final.begin()+(week-1)*13+begi);
        Final.erase(Final.begin()+(week-1)*13+begi);
        Final.erase(Final.begin()+(week-1)*13+begi);
        Final.insert(Final.begin()+(week-1)*13+begi,none);
        Final.insert(Final.begin()+(week-1)*13+begi,none);
        Final.insert(Final.begin()+(week-1)*13+begi,none);
            break;
        }//
    }
    }}//end of reset
    if(statuss)
    {return true;}
    return false;//give the situation to last depth



}


int SearchFun::dividestring(string line,int mount,char split){
    istringstream sin(line);
    vector<string> fields;
    string field;
    while (getline(sin, field, split))
    {
        fields.push_back(field);
    }//read line and split by ,
    return atoi(fields[mount].c_str());
}

int SearchFun::getTotal(){
    return indextotal;
}

int readDir(){
    QDir *dir=new QDir("./result");
    if ( !dir->exists() )
       {dir=new QDir(QDir::currentPath());
        dir->mkdir("result");
        return readDir();}

           uint m=dir->count()-2;
    return (int)m;

}//read dir if null make a new one
