#include <stdio.h>
int main(){
int arr[10];
int sum=0;
for(int i=0;i<9;i++){
printf("Enter the %d element of the array:",i+1);
scanf("%d",&arr[i]);
sum=sum+i;
}
printf("The sum of the array is %d\n",sum);
printf("The average of the array is %f\n",(float)sum/10);
printf("The percantage of the array is %f\n",(float)sum/1000*100);
return 0;
}