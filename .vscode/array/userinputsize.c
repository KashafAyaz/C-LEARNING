#include<stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
printf("the array size is arr[%d]\n",n);
int arr[n];
for(int i=0;i<=n;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
}
return 0;
}