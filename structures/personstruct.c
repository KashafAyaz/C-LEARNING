//struct person with name ,salary and age as its atttributes . declare and initialize variables for this . print the name of first person and age of the other.
#include<stdio.h>
#include<string.h>
int main(){
struct person{
char name[50];
float salary;
int age;
}p1,p2;
strcpy(p1.name,"ksf");
p1.salary=800000;
p1.age=19;
strcpy(p2.name,"reeba");
p2.salary=900000;
p2.age=18;
printf("the name of first person is %s\n",p1.name);
printf("the age of second person is %d",p2.age);
return 0;
}