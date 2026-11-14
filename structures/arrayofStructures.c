#include <stdio.h>
int main(){
typedef struct friends{
int number;
int evil;
char rank;
}friends;
friends arr[10]; // ts array can store 10 friends info
arr[0].number = 3;  arr[0].evil = 34;  arr[0].rank = 'A';
arr[1].number = 1;  arr[1].evil = 78;  arr[1].rank = 'B';
arr[2].number = 7;  arr[2].evil = 12;  arr[2].rank = 'C';
arr[3].number = 4;  arr[3].evil = 90;  arr[3].rank = 'A';
arr[4].number = 9;  arr[4].evil = 45;  arr[4].rank = 'D';
arr[5].number = 2;  arr[5].evil = 63;  arr[5].rank = 'B';
arr[6].number = 8;  arr[6].evil = 27;  arr[6].rank = 'C';
arr[7].number = 5;  arr[7].evil = 51;  arr[7].rank = 'A';
arr[8].number = 6;  arr[8].evil = 99;  arr[8].rank = 'E';
arr[9].number = 10; arr[9].evil = 8;   arr[9].rank = 'D';
for (int i = 0; i < 10; i++) {
printf("Friend %d -> number: %d, evil: %d, rank: %c\n",i, arr[i].number, arr[i].evil, arr[i].rank);
}
return 0;}