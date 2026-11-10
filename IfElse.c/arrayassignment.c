#include <stdio.h>

int recursiveMinimum(const int array[], size_t size);

int main(void)
{
   int a[] = {42, 7, 19, 3, 88, 25};

   printf("Minimum value: %d\n", recursiveMinimum(a, 6));

   return 0;
}

int recursiveMinimum(const int array[], size_t size)
{
   if (size == 1) {   // base case
      return array[0];
   }

   int minOfRest = recursiveMinimum(&array[1], size - 1);

   // return the smaller of the first element and the minimum of the rest
   return (array[0] < minOfRest) ? array[0] : minOfRest;
}