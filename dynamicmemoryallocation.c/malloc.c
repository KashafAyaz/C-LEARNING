#include<stdio.h>
#include<stdlib.h> //header file for dynamic memory allocation
int main(){
int* ptr=(int*)malloc(100*sizeof(int)); 
printf("%d",*ptr); //by using * we fetch the value of the address whose value is stored in our integer  
return 0;
}
//here we get the garbage value by malloc bcz it allocates the memory with the garbage value