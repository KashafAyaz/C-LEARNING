#include <stdio.h>
int main(){ //user defined data type
struct idk{
     int humour;
     int coolness;
     int evil;
     char grade;
};
struct idk reeba;
reeba.evil = 10;
reeba.coolness = 60;
reeba.humour = 90;
reeba.grade = 'A';
struct idk boba;
boba.coolness = 65;
boba.evil = 7;
boba.humour = 40;
boba.grade = 'A';
struct idk manal;
manal.humour = 35;
manal.coolness = 90;
manal.evil = 2;
manal.grade = 'A';
struct idk zim;
zim.humour = 2;
zim.evil = 100;
zim.coolness = 20;
zim.grade = 'F';
struct idk kashaf;
kashaf.grade;
printf("Enter grade of kashaf: "); //taking input
scanf("%c",&kashaf.grade);
printf("The grade is %c",kashaf.grade);
return 0;
}