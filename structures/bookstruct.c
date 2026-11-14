#include <stdio.h>
#include <string.h>
int main(){
struct book{
char name[50];
float price;
int pages;
}a,b,c;
strcpy(a.name,"kite runner"); //strcpy(destination,source)
a.price=63;
a.pages=60;
strcpy(b.name,"idk");
b.price=43;
b.pages=78;
strcpy(c.name,"ik");
c.pages=33;
c.price=32;
printf("%d\n",a.pages);
printf("%s\n",a.name);
printf("%.2f\n",a.price);
printf("%d\n",b.pages);
printf("%s\n",b.name);
printf("%.2f\n",b.price);
printf("%d\n",c.pages);
printf("%s\n",c.name);
printf("%.2f\n",c.price);
return 0;
}