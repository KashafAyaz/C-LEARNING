#include<stdio.h>
void greeting(int n){
if(n==0) return;
printf("PAGAL\nPSYCHO\nDRAMEBAZ\n");
greeting(n-1);
return;
}
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
greeting(n);
return 0;
}