//to find second largest
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int max=arr[0];
int smax=arr[0];
for(int i=0;i<=4;i++){
if(max<arr[i]){
max=arr[i];
}}
printf("the largest is %d\n",max);
for(int i=0;i<=4;i++){
if(arr[i]!=max && smax<arr[i]){
smax=arr[i];
}}
printf("the second largest is %d\n",smax);
return 0;
}