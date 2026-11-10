#include <stdio.h>
int main() {
int x;
printf("Enter your percentage : ");
scanf("%d",&x);
if(x>91 && x<100){
printf("Your grade is Excellent");}
else if(x>81 && x<90){
printf("Your grade is Very Good");}
else if(x>71 && x<80){
printf("Your grade is Good");}
else if(x>61 && x<70){
printf("Your grade is Can do better");}
else if(x>51 && x<60){
printf("Your grade is Average");}
else if(x>41 && x<50){
printf("Your grade is Below Average");}
else{
printf("Your grade is Fail");}
return 0;
}