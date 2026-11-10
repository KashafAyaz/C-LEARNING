#include <stdio.h>
int main() {
    int x;
    printf("Enter the first number : ");
    scanf("%d",&x);
    int y;
    printf("Enter the second number : ");
    scanf("%d",&y);
    int z;
    printf("Enter the third number : ");
    scanf("%d",&z);
    if(x>y && x>z) {
    printf("The greatest number is : %d",x);
    }
    else if(y>x && y>z) {
    printf("The greatest number is : %d",y);
    }
    else if(z>z && z>y) {
    printf("The greatest number is : %d",z);
    }
    return 0;
}