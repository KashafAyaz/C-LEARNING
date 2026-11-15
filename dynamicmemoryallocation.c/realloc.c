//realloc is used to dynamically change the memory allocation of a previously allocated memory
//realloc(pointer,new-size)
#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr=(int*)malloc(5*sizeof(int));
printf("%p\n",ptr);
ptr=realloc(ptr,1000*sizeof(int));
//new memory allocated
printf("%p",ptr);
return 0;}
