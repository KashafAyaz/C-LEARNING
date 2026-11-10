#include <stdio.h>
int main(){
int arr[10];
for(int i=0;i<=9;i++){
printf("the element %d  :",i+1);
scanf("%d",&arr[i]);
if(i%2==0){
printf("increemented by ten :%d\n",arr[i]=10);
}
else{
printf("second multiple :%d\n",arr[i]*2);
}
}
return 0;
}