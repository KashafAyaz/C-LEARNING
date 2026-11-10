#include <stdio.h>
int main() {
  float  m1 = 37; // maths marks
  float m2 = 35; // science marks 
  float m3 = 39; // english marks
  float m4 = 38; // physics marks
float total = m1 + m2 + m3 + m4;
  float percentage = (total / 160)*100;
  printf("Percentage is : %f", percentage);
  return 0;
}