#include<stdio.h>
#include<string.h>
#define N 30
typedef struct employee{
char name[80];
int id;
long pay;
}employee;
int main(){
employee arr[N];
for(int i=0;i<N;i++){
printf("Enter name:");
scanf("%s",&arr[i].name);
printf("Enter id:");
scanf("%d",&arr[i].id);
printf("Enter pay:");
scanf("%ld",&arr[i].pay);
}
return 0;
}