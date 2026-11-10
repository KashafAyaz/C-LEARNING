#include <stdio.h>
int main(){
int arr[5]; 
printf("elements %d: ");
for (int i=0;i<5;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<5;i++){
printf("Table of %d:\n",arr[i]);
for(int j=1;j<10;j++){
printf("%d x %d = %d\n",arr[i],j,arr[i]*j);
}
return 0;
}}