//sum of elements of array
#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
int arr[5];
int sum=0;
for(int i=0;i<=4;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("the sum of array is:%d",sum);
return 0;
}
