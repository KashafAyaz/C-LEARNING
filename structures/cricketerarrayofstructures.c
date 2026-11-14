//A record contains name of a cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketers and then write a program to read these records.
#include <stdio.h>
#include <string.h>

typedef struct cricketer {
    char name[30];
    int age;
    int tests;
    float avg_runs;
} cricketer;

int main() {
    cricketer c[20];

    strcpy(c[0].name, "James");      c[0].age = 32;  c[0].tests = 54;   c[0].avg_runs = 45.8;
    strcpy(c[1].name, "Oliver");     c[1].age = 34;  c[1].tests = 38;   c[1].avg_runs = 42.3;
    strcpy(c[2].name, "William");    c[2].age = 26;  c[2].tests = 31;   c[2].avg_runs = 12.4;
    strcpy(c[3].name, "Henry");      c[3].age = 35;  c[3].tests = 40;   c[3].avg_runs = 31.6;
    strcpy(c[4].name, "George");     c[4].age = 30;  c[4].tests = 26;   c[4].avg_runs = 38.2;
    strcpy(c[5].name, "Harry");      c[5].age = 25;  c[5].tests = 22;   c[5].avg_runs = 35.1;
    strcpy(c[6].name, "Jack");       c[6].age = 30;  c[6].tests = 24;   c[6].avg_runs = 37.9;
    strcpy(c[7].name, "Thomas");     c[7].age = 23;  c[7].tests = 18;   c[7].avg_runs = 9.7;
    strcpy(c[8].name, "Charles");    c[8].age = 32;  c[8].tests = 20;   c[8].avg_runs = 16.5;
    strcpy(c[9].name, "Edward");     c[9].age = 39;  c[9].tests = 15;   c[9].avg_runs = 14.2;
    strcpy(c[10].name, "Arthur");    c[10].age = 28; c[10].tests = 10;  c[10].avg_runs = 8.3;
    strcpy(c[11].name, "Daniel");    c[11].age = 32; c[11].tests = 28;  c[11].avg_runs = 36.4;
    strcpy(c[12].name, "Samuel");    c[12].age = 30; c[12].tests = 12;  c[12].avg_runs = 18.6;
    strcpy(c[13].name, "Joseph");    c[13].age = 34; c[13].tests = 44;  c[13].avg_runs = 22.7;
    strcpy(c[14].name, "Benjamin");  c[14].age = 36; c[14].tests = 60;  c[14].avg_runs = 41.5;
    strcpy(c[15].name, "Alexander"); c[15].age = 38; c[15].tests = 118; c[15].avg_runs = 52.1;
    strcpy(c[16].name, "Matthew");   c[16].age = 40; c[16].tests = 75;  c[16].avg_runs = 46.8;
    strcpy(c[17].name, "Andrew");    c[17].age = 33; c[17].tests = 77;  c[17].avg_runs = 44.2;
    strcpy(c[18].name, "Richard");   c[18].age = 35; c[18].tests = 54;  c[18].avg_runs = 29.3;
    strcpy(c[19].name, "David");     c[19].age = 37; c[19].tests = 46;  c[19].avg_runs = 27.9;
    
    printf("              |--- Cricketer Records ---|\n");
    for (int i = 0; i < 20; i++) {
        printf("%2d. %-10s | Age: %d | Tests: %3d | Avg: %.2f\n",
               i + 1, c[i].name, c[i].age, c[i].tests, c[i].avg_runs);
    }

    return 0;
}