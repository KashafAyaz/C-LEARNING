#include <stdio.h>
int sum(int n){
if(n==1 || n==0) return n;
return n+sum(n-1);;
}
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
int s=sum(n);
printf("the sum is %d",s);
return 0;
}