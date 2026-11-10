#include<stdio.h>
int main(){
int arr[5];
int sum=0;
for(int i=0;i<=4;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
printf("the sum is %d",sum);
return 0;
}
