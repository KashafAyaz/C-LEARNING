#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter no of integers:");
scanf("%d",&n);
int* ptr=(int*)malloc(n*sizeof(int)); //it creates an array of n size 
int* p =ptr; //to store the value of ptr so it doesnt get lost while we take input
for(int i=1;i<n;i++){
    scanf("%d",&(*ptr));
    ptr++; //increement to next block
}
int* t =p; //again saving the p so it doesnt get lost 
for(int i=1;i<n;i++){
    printf("%d\n",(*p));
    p++;
}
return 0;
}