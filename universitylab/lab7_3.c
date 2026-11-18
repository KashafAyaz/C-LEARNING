#include<stdio.h>
#include<string.h>
typedef struct { //typedef for nicknmaes
    char name[50];
    int roll;
    float cgpa;

}Student;
int main(){
Student s1 ={"kashaf",113,3.6};
printf("Roll : %d\nName : %s\nCgpa: %.2f\n" ,s1.roll,s1.name,s1.cgpa);
Student s2 = s1;
s2.cgpa = 2.0;
printf("Roll : %d\nName : %s\nCgpa: %.2f\n" ,s2.roll,s2.name,s2.cgpa);
return 0;
 }
    