#include<stdio.h>
int main(){
int arr[10];
int n,x,pos;
printf("Enter no of elements:");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the element %d of the array is: ",i+1);
scanf("%d",&arr[i]);
}
printf("Enter the new element: ");
scanf("%d",&x);
printf("Enter the new position: ");
scanf("%d",&pos);
n=n+1;
for(int i=n-1;i>pos;i--){
arr[i]=arr[i-1];
}
arr[pos]=x;
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
return 0;
}