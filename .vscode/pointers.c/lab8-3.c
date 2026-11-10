#include <stdio.h>
void swapbyValue(int a,int b){
int temp =a;
a=b;
b=temp; //only local copies are swapped
}

void swapbyPointer(int *a,int *b){
int temp = *a;
*a=*b;
*b=temp; //the callers variable are swapped
}
int main(void){
    int x=5,y=9;
    swapbyValue(x,y);
    printf("after swapbyValue : x=%d,y=%d\n",x,y); //no return bcz func has no return
    swapbyPointer(&x,&y);
    printf("after swapbyPointer : x=%d,y=%d\n",x,y);
return 0;
}