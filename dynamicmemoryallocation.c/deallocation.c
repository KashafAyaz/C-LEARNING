#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr=(int*)malloc(5*sizeof(int));
free(ptr); // we can deallocate memory like ts
return 0;
}