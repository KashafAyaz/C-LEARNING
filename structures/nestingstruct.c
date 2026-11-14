#include <stdio.h>
#include <string.h>

typedef struct intro {
    char name[50];
    int age;
    float gpa;
} intro;

typedef struct personal {
    intro info;          // nested struct (a member of type intro)
    char fatherName[80];
    int birthyear;
} personal;

int main() {
    personal ksf;

    strcpy(ksf.info.name, "ksf");   // go through info to reach intro's fields
    ksf.info.age = 19;
    ksf.info.gpa = 4.0;
    strcpy(ksf.fatherName, "ayaz");
    ksf.birthyear = 2007;

    printf("Name: %s\n", ksf.info.name);
    printf("Age: %d\n", ksf.info.age);
    printf("GPA: %.1f\n", ksf.info.gpa);
    printf("Father: %s\n", ksf.fatherName);
    printf("Birth year: %d\n", ksf.birthyear);

    return 0;
}