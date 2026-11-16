#include <stdio.h>
#include<string.h>
typedef struct country{
char name[50];
long population;
char language[50];
}country;
int main(){
country pakistan,china,indonesia;
strcpy(pakistan.name,"pakistan");
pakistan.population=12000;
strcpy(pakistan.language,"urdu");

strcpy(china.name,"china");
china.population=130000;
strcpy(china.language,"chinese");

strcpy(indonesia.name,"indonesia");
indonesia.population=78000;
strcpy(indonesia.name,"indonesian");
 return 0;
}


