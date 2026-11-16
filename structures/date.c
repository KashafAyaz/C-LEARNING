#include <stdio.h>
#include<string.h>
typedef struct date{
int day;
char month[50];
int year;
}date;
int main(){
date today;
today.day=16;
strcpy(today.month,"november");
today.year=2026;
printf("%d-%s-%d",today.day,today.month,today.year);
 return 0;
}