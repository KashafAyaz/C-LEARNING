#include <stdio.h>
int ain(void){
int n;
printf("how many marks?");
scanf("%d",&n);
int *marks = malloc(n* sizeof(int));
if(marks==NULL){ //always check
printf("memory allocation failed\n");
return 1;
}
int total=0;
for(int i=0;i<n;i++){
    printf("mark %d: ",i+1);
    scanf("%d",&marks[i]); //or:marks+i
    total+=marks[i];
}
printf("average=%.2f\n",(float)total /n);
free(marks); //release memory
marks=NULL; //avoid dangling pointer
return 0;
}