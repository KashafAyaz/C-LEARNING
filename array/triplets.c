//if 3 numbers add up to the n value it will increement the count
#include<stdio.h>
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
int count=0;
int arr[n];
for(int i=0;i<9;i++){
printf("enter element %d of array:",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<9;i++){
   for(int j=i+1;j<9;j++){
      for(int k=j+1;j<9;j++){
if(arr[i]+arr[j]+arr[k]==n){
count++;
}
}
}
}
printf("the triplets are %d",count);
return 0;
}