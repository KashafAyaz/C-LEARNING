#include <stdio.h>
int main() {
int A , B , C , D;
printf("Enter your marks : ");
scanf("%d",&A,&B,&C,&D);
if(90 == A) {
printf("Grade = A");
}
if(80 == B) {
printf("Grade = B");
}
if(70 == C) {
printf("Grade = C");
}
if(60 == D) {
printf("Grade = D");
}
return 0;
}