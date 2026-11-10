#include <stdio.h>
union value{
    int i;
    float f;
    char c;
    double d;
};
int main(void){
    union value v;
    v.i=42;
    printf("v.i = %d\n",v.i);
    v.f=3.5;
    printf("v.f = %.2f\n",v.f);
    printf("v.i = %d\n",v.i);
    printf("size of value %d",sizeof(v));
    return 0;
}