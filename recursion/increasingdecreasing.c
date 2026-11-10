#include <stdio.h>
void increasingdecreasing(int n){
if(n==0) return;
printf("%d\n",n);
increasingdecreasing(n-1);
printf("%d\n",n);
return;
}
int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
increasingdecreasing(n);
return 0;
}