#include <stdio.h>
#include <string.h>
int main(){
char str[40];
//scanf("%s",str); //no & is needed
gets(str);
printf("%s",str);
//puts(str);
return 0;
}