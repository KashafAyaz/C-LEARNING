#include <stdio.h> //store transpose of a matrix in another matrix
int main(){
int arr[3][3]={{1,2,3},{5,6,7},{7,8,9}};
for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
printf("\nTranspose of the matrix is:\n");
for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
    printf("%d ",arr[j][i]);
 }
 printf("\n");
}
int brr[3][3];
for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
    brr[i][j]=arr[j][i];
 }
}
printf("\nStored transpose in another matrix:\n");
for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
    printf("%d ",brr[i][j]);
 }
 printf("\n");
}
return 0;
}