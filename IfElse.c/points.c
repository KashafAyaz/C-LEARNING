#include <stdio.h>
int main(){
int x, y;
printf("Enter the coordinates : ");
scanf("%d", &x);
scanf("%d", &y);
if (x == 0 && y == 0) {
printf("The coordinates lie at the origin");
}
else if (y == 0) {
printf("The coordinates lie on x axis");
}
else if (x == 0){
printf("The coordinates lie on y axis");
}
else{
printf("the point does not lie on x or y axis");
}
return 0;
}