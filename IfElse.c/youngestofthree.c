#include <stdio.h>
int main() {
int kashafage;
printf("Enter Kashaf's age : ");
scanf("%d", &kashafage);
int toobaage;
printf("Enter Tooba's age : ");
scanf("%d", &toobaage);
int manalage;
printf("Enter Manal's age : ");
scanf("%d", &manalage);
if(kashafage < manalage && kashafage < toobaage) {
printf("Kashaf is the youngest");
}
else if(toobaage < manalage && toobaage < kashafage) {
printf("Tooba is the youngest");
}
else if(manalage < toobaage && manalage < kashafage) {
printf("Tooba is the youngest");
}
return 0;
}
