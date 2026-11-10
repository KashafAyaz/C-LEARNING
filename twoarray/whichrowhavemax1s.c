#include <stdio.h> //which row have max 1's in a matrix of only 0 and 1's in 2d array
int main(){
int arr[3][3]={{1,0,1},{0,1,0},{1,1,1}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

int sum=0;
for(int i=0;i<1;i++){
for(int j=0;j<3;j++){
        sum=sum+arr[i][j];
    }
    printf("sum of row %d is: %d\n",i,sum);
}
sum=0;
for(int i=1;i<2;i++){
for(int j=0;j<3;j++){
        sum=sum+arr[i][j];
    }
    printf("sum of row %d is: %d\n",i,sum);
}
sum=0;
for(int i=2;i<3;i++){
for(int j=0;j<3;j++){
        sum=sum+arr[i][j];
    }
    printf("sum of row %d is: %d\n",i,sum);
}
int maxrow=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]==maxrow){
            maxrow=i;
        }
    }}
    printf("\nPosition of maximum element: (%d, %d)", maxrow, 0);
    printf("\nRow %d has maximum 1's in the matrix", maxrow);
return 0;
}
