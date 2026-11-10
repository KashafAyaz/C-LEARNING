#include<stdio.h>
#include<limits.h>
int main(){
int arr[5];
//int max=arr[0];
int max=INT_MIN;
for(int i=0;i<=4;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
if(max<arr[i]){
    max=arr[i];
}
}
printf("max is %d",max);
return 0;
}