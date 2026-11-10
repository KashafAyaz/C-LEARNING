#include <stdio.h>
int main(){
float arr[10]; 
float sum=0,avg;
for (int i=0;i<10;i++){
printf("elements %d: ",i);
scanf("%f",&arr[i]);
sum=sum+arr[i];
}
avg=sum/10;
printf("sum of all elements =%.0f\n",sum);
printf("avg of all elements =%.1f",avg);
return 0;
}