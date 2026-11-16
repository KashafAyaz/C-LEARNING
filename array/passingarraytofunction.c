//passing an array to a function for swapping
#include<stdio.h>
void swap(int arr[]){
    int temp;
temp=arr[0];
arr[0]=arr[1];
arr[1]=temp;
}
int main(){
int arr[5]={1,2};
printf("before swapping:%d,%d\n",arr[0],arr[1]);
swap(arr);
printf("after swapping:%d,%d",arr[0],arr[1]);
return 0;
}