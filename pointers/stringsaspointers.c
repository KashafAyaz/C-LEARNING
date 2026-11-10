#include<stdio.h>
#include<string.h>
int main(){
    char str[]="my name is kashaf";
    char *ptr=&str[0];
    printf("the address of the first character is: %p\n",&str[0]);
    printf("the address of the string is: %p\n",str);
    //both are same bcz in a array,character array ,string have the same address as the first character address
   int i=0;
   while(*ptr!='\0'){
   printf("%c",*ptr);
   ptr++;
   i++;
   }
    return 0;
}
