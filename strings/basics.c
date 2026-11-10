#include <stdio.h>
int main(){
char str[]={"im kashaf and life is so fucked up\0"};
str[3]='M';
int i=0;
while(str[i]!='\0'){
printf("%c",str[i]);
i++;
}
return 0;
}