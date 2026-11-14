#include <stdio.h>
typedef int* pointer;
int main(){
int x=6,y=7; //here we can initialize both in the sem line
//int* a=&x,b=&y;  // but we cannot initialize pointers in one line here we will use typedef
pointer a=&x,b=&y;
printf("%p\n",a);
printf("%p\n",b);
return 0;
}