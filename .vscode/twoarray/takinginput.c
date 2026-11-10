#include <stdio.h>
int main(){
int r;
printf("Enter the number of rows: ");
scanf("%d",&r); 
int c;
printf("Enter the number of columns: ");
scanf("%d",&c);
int arr[2][2];
for(int i=0;i<2;i++){
 for(int j=0;j<2;j++){
printf("Enter the value for arr[%d][%d]: ",i,j);
scanf("%d",&arr[i][j]);
}}
for(int i=0;i<2;i++){
 for(int j=0;j<2;j++){  
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}