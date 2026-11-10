#include<stdio.h>
int main(){
int arr[5];
int min=arr[0];
for(int i=0;i<4;i++){
printf("the element %d of array is:",i+1);
scanf("%d",&arr[i]);
if(min>arr[i]){
    min=arr[i];
}
}
printf("the minimum element of array is:%d",min);
return 0;
}