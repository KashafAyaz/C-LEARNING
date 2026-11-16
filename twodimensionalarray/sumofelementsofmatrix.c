#include<stdio.h>
int main(){
int r;
printf("Enter number of rows:");
scanf("%d",&r);
int c;
printf("Enter number of columns:");
scanf("%d",&c);
int arr[r][c];
printf("matrix elements:\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
printf("Enter element for arr[%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
}}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
 }
int sum=0;
for(int i=0;i<r;i++){   
for(int j=0;j<c;j++){
sum=sum+arr[i][j];}}
printf("\nSum of all elements: %d", sum);
return 0;
}
