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
if(arr[i]+arr[j]==n){
    count++;
}
}
}
printf("total pairs:%d",count);
    return 0;
}