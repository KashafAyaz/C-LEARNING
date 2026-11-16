#include<stdio.h>
int main(){
int arr[3][3]={{5,6,7},{8,9,11},{12,14,15}};
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){   
printf("%d ",arr[i][j]);
}   
printf("\n");
}
int sum=0;
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
sum=sum+arr[i][j];
}}
printf("Sum of all elements in the matrix is: %d", sum);
return 0;
}
