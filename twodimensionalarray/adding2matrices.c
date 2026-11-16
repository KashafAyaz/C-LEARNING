#include<stdio.h>
int main(){
int arr[2][2]={{1,2},{3,4}};
printf("matrix 1:\n");
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
int brr[2][2]={{5,6},{7,8}};
printf("matrix 2:\n");
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("%d ",brr[i][j]);
}
printf("\n");
}
int crr[2][2];
printf("sum of matrix 1 and 2 is:\n");
for(int i=0;i<2;i++){   
for(int j=0;j<2;j++){
crr[i][j]=arr[i][j]+brr[i][j];
printf("%d ",crr[i][j]);
}
printf("\n");
}
return 0;
}
