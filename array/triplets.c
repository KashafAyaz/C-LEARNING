#include <stdio.h>
int main(){
    int count=0;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<=9;i++){
    printf("the element %d is ",i+1);
    scanf("%d",&arr[i]);}
for(int i=0;i<=9;i++){
 for(int j=i+1;j<=9;j++){
    for(int k=j+1;k<=9;k++)
if(arr[i]+arr[j]+arr[k]==n){
    count++;
}
}
}
printf("triplets:%d",count);
    return 0;
}