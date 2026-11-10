#include <stdio.h>
int main(){
int count=0;
int n;
printf("Enter n: ");
scanf("%d",&n);
int arr[10];
for(int i=0;i<=9;i++){
printf("the element %d:",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<=9;i++){
if(arr[i]>n){
count++;
}
}
printf("%d",count);
return 0;
}