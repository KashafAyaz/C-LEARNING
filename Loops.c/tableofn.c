#include <stdio.h>
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
for(int i=1;i<=100;i++){
if(i%n==0)
printf("%d\n",i);}
return 0;
}