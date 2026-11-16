#include <stdio.h>
int main(){
int arr[2][2]={{1,2},{3,4}};
printf("matrix:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int max=arr[0][0];
int maxrow=0,maxcol=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(arr[i][j]>max){
            max=arr[i][j];
            maxrow=i;
            maxcol=j;
        }
    }}
    printf("maximum element of matrix is: %d",max);
    printf("\nPosition of maximum element: (%d, %d)", maxrow, maxcol);
 int min=arr[0][0];
 int minrow=0,mincol=0;
for(int i=0;i<2;i++){   
for(int j=0;j<2;j++){
        if(arr[i][j]<min){
            min=arr[i][j];
            minrow=i;
            mincol=j;
        }
    }}
    printf("\nminimum element of matrix is: %d",min);
    printf("\nPosition of minimum element: (%d, %d)", minrow, mincol);
return 0;
}