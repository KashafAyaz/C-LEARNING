#include <stdio.h>
//arrays and pointer arithematic
int main(void){
int arr[5]={10,20,30,40,50};
int *p=arr;    //same as p=&arr[0]
for (int i=0;i<5;i++){
    printf("arr[%d]=%d *(p+%d),(p+%d)=%d address=%p\n", i,arr[i],i,(p+i),(p+i));
 }
 p++;
 printf("after p++, *p=%d\n",*p);
 return 0;
}