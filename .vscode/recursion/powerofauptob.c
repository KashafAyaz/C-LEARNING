#include <stdio.h>
int power(int a,int b){
 int x=1;
if(x>b) return 1;
return x*a*power(a,b-1);
}

int main(){
int pow=1;
int a,b;
printf("Enter base:");
scanf("%d",&a);
printf("Enter power:");
scanf("%d",&b);
int p=power(a,b);
printf("the %d raised to the power %d is %d",a,b,p);
return 0;
}