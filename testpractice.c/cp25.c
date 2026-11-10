#include<stdio.h>
int main(){
int arr[10];
int n,x;
printf("Enter no of elements:");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the element %d of the array is: ",i+1);
scanf("%d",&arr[i]);
}
printf("Enter the element to be deleted: ");
scanf("%d",&x);
if(x>=n || x<0){
printf("not possible");
}

for(int i=x;i<n-1;i++){
arr[i]=arr[i+1];
}
n=n-1;
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
return 0;
}