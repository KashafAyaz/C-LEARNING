#include<stdio.h>
#include<string.h>
typedef struct { //typedef for nicknmaes
    char name[50];
    int roll;
    float cgpa;

}Student;
int main(){
    Student class[4]={
         {"ksf",113,3.9},
         {"reeba",106,3.9},
         {"boba",111,3.9},
         {"zim",101,3.9}
    };
    for (int i = 0; i<4;i++){
    printf("%s %d %.2f\n",class[i].name,class[i].roll,class[i].cgpa);
    }
    return 0;
}