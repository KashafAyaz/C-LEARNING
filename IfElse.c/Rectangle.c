#include <stdio.h>
int main() {
    float length ,breadth , area , perimeter;
    printf("Enter the length of the rectangle : ");
    scanf("%f" , &length);
    printf("Enter the breadth of the rectangle : ");    
    scanf("%f" , &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of the rectangle is : %f\n", area);
    printf("Perimeter of the rectangle is : %f\n", perimeter);
    if(area>perimeter) {
        printf("The Area is greater than the Perimeter");
    }
    else if(area<perimeter) {
        printf("The Area is smaller than the Perimeter");
    }
    return 0;
}