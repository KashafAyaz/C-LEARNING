#include <stdio.h>
int main ()
{
   float weight;
   printf("Enter your weight : ");
   scanf("%f", &weight);
   float waterintake;
   printf("Enter your water intake : ");
   scanf("%f", &waterintake);
   float recommendedwaterintake = weight * 0.14;
    if(recommendedwaterintake>waterintake) {
        printf("You are Hydrated");
    }
    else if(recommendedwaterintake<waterintake) {
        printf("You are not Hydrated");
    }
     return 0;

}

