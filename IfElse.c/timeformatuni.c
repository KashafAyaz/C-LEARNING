#include <stdio.h>
int main(){
int time,hour,mins,secs;
printf("Enter time in format hh:mm:ss : ");
scanf("%d:%d:%d",&hour,&mins,&secs);
hour=hour+1;
printf("Updated time after 1 hour is %d:%d:%d,hour,mins,secs");
return 0;
}