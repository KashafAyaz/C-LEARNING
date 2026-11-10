#include<stdio.h>
int main(){
int arr[5];
int max=arr[0];
int smax=arr[0];
for(int i=0;i<=4;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
if(max<arr[i]){
    max=arr[i];
}
}
for(int i=0;i<=4;i++){
if(arr[i]!=max && smax<arr[i]){
    smax=arr[i];}}
printf("max is %d",smax);
return 0;
}