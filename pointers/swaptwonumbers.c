#include <stdio.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
int a=6;
int b=7;
int* x=&a;
int* y=&b;
printf("Before swapping: a=%d, b=%d\n",a,b);
swap(x,y);
printf("After swapping: a=%d, b=%d\n",a,b);
return 0;
}