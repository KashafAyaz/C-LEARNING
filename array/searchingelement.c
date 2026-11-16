//searching element in an array
#include <stdio.h>
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n;i++){
printf("Enter element %d of array is:",i+1);
scanf("%d",&arr[i]);
}
int item,found=0;
printf("enter element that needs to be searched:");
scanf("%d",&item);
for(int i=0;i<=n;i++){
if(arr[i]==item){
found=1;
}
}
if(found==1){
printf("element found");}
else{
printf("element not found");
}
return 0;
}