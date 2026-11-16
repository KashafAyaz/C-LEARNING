product of arrays with input
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
//product of arrays without input
// #include<stdio.h>
// int main(){
// int arr[5]={1,2,3,4,5};
// int product=1;
// for(int i=0;i<=4;i++){
// product=product*arr[i];
// }
// printf("the product of array is %d",product);
// return 0;
// }