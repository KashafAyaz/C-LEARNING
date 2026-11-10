#include<stdio.h>
int main(){
int arr[5];
int max;
for(int i=0;i<4;i++){
printf("Enter the element %d of the array:",i+1);
scanf("%d",&arr[i]);
max=arr[0];
if(max<arr[i]){
    max=arr[i];
}}
printf("the max element of the array is %d",max);

return 0;
}