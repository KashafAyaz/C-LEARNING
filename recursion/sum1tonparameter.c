#include <stdio.h>
void sum(int s,int n){
    if(n==0){
    printf("%d",s);
    return;}
sum(s+n,n-1);
return;
}
int main(){
int n;
printf("enter n: ");
scanf("%d",&n);
sum(0,n);
return 0;
}