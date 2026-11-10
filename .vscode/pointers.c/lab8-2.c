#include <stdio.h>
int main(void){
int x=10;
int *p =&x; //p nows holds the address of x
printf("x=%d\n",x);
printf("&x=%p\n",&x); //address of x
printf("p=%p\n",p); //address of x bcx p is address of x
printf("*p=%d\n",*p); //value of the address of x
printf("&p=%p\n",&p); //p has its own address
*p=25;
printf("x is now %d\n",x);
return 0;
}