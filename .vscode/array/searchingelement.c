#include<stdio.h>
int main(){
int arr[10];
int n,item,found=0;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
}
printf("Enter the element to search: ");
scanf("%d",&item);
for(int i=1;i<n;i++){
    if(arr[i]==item){
    found=1;
    break;
    }}
if(found==1){
    printf("Element  found");
}
else{
    printf("Element not found");
}
return 0;
}
