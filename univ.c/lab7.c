#include <stdio.h>
#include<string.h> //declares function related to string
//defining a structure
//strlen(name) length
//strcpy(dest,src) destination par source ki value ko copy
//strcmp(name1,name2) comparing
struct Student {
    int roll;
    char name[50];
    float cgpa;
};
int main(){
    //declaring a structure
   // struct Student s1;
    //s1.roll = 113;
    //strcpy(s1.name, "Kashaf"); //arrays cant be assigned with =*/
    //s1.cgpa = 3.6;
    //printf("Roll : %d\n Name : %s\n Cgpa: %.2f\n" , s1.roll , s1.name,s1.cgpa);
    //intializing
    struct Student s1 ={113, "kashaf",3.6};
    printf("Roll : %d\nName : %s\nCgpa: %.2f\n" ,s1.roll,s1.name,s1.cgpa);

  return 0;
    }