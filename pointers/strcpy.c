#include<stdio.h>
#include <string.h>
int main(){
char s1[12]="kashaf";
char s2[12];
strcpy(s2,s1);
printf("the copied string is: %s",s2);
return 0;
}