#include <stdio.h>
int main(){
int max;
int arr[5];
for(int i=0;i<=5;i++){
printf("Elements %d: ",i);
scanf("%d",&arr[i]);
}
max=arr[0];
for(int i=1;i<=5;i++){
if(arr[i]>max){
max=arr[i];
}}
printf("the max is %d",max);
return 0;
}
