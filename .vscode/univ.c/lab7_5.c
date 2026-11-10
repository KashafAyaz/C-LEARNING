#include<stdio.h>
#include<string.h>
typedef struct{
    int day,month,year;
}Date;
typedef struct{
    char dept[50];
    char mission[50];
    char vision[50];
    char code[50];
}Department;
typedef struct { //typedef for nicknmaes
    char name[50];
    int roll;
    float cgpa;
     Date dob;
     Department dept; //structure inside structure
}Student;
int main(){
Student s ={"kashaf",113,3.6,{8,1,2007},{"CIS","idk","wth","wth+67"}};
printf("department: %s\nmission: %s\nvision:%s\ncode:%s\n",s.Department.dept,s.Department.mission,s.Department.vision,s.Department.code);
}