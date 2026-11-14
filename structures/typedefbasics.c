#include <stdio.h> //typedef creates an a new name for an existing type. It doesn’t create a new type, it just gives an existing one a shorter or clearer name.
typedef float realnumber;
typedef int Integer;
int main(){
realnumber x=6;
printf("%.1f\n",x);
Integer y=8;
printf("%d",y);
return 0;
}