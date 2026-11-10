#include <stdio.h>
int main() {
  float  m1 = 100; // maths marks
  float m2 = 50; // science marks 
  float m3 = 75; // english marks
  float m4 = 80; // physics marks
  float m5 = 90; // social studies marks
  float total = m1 + m2 + m3 + m4 + m5;
  float percentage = total / 5;
  printf("Percentage is : %f", percentage);
  return 0;
}