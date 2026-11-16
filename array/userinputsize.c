//taking input
#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
int arr[n];
printf("the elements of array are:");
for(int i=0;i<n;i++){
printf("the element %d of array is:",i+1);
scanf("%d",&arr[i]);
}
return 0;
}