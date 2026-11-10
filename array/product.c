#include<stdio.h>
int main(){
int arr[5],product=1;
for(int i=0;i<=4;i++){
printf("the element %d is ",i+1);
scanf("%d",&arr[i]);
product=product*arr[i];
}
printf("the product is %d",product);
return 0;
}