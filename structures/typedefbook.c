#include <stdio.h> //struct book with attributes name , pages and price
#include <string.h>
int main(){
typedef struct book{
char name[50];
float price;
int pages;
}book; //rename the whole thing struct book to only book
book a; //book is the struct name and a is the object name
strcpy(a.name,"kite runner"); //strcpy(destination,source)
a.price=63;
a.pages=60;
book b;
strcpy(b.name,"idk");
b.price=43;
b.pages=78;
book c;
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