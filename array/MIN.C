#include<stdio.h>
#include<limits.h>
int main(){
int arr[5];
//int min=arr[0];
int min=INT_MAX;
for(int i=0;i<=4;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
if(min>arr[i]){
    min=arr[i];
}
}
printf("min is %d",min);
return 0;
}