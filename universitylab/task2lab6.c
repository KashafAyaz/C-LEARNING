#include <stdio.h>
int main(){
float arr[5]; 
float max;
for (int i=0;i<5;i++){
    printf("elements %d: ",i+1);
scanf("%f",&arr[i]);
}
max = arr[0];
for (int i=1;i<5;i++){
    if(arr[i]>max){
        max= arr[i];
    }}

printf("max element =%.0f",max);
return 0;
}