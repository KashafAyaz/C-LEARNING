#include <stdio.h>
int main(){
    int sumEven=0;
    int sumOdd=0;
    int difference;
    int arr[5];
    for(int i=0;i<=4;i++){
    printf("the element %d is ",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
    if(i%2==0){
        sumEven=sumEven+arr[i];}
    else{
    sumOdd=sumOdd+arr[i];}
    }
    difference=sumEven-sumOdd;
    printf("%d",difference);
    return 0;
}