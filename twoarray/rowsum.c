#include <stdio.h> //which row have max sum in 2d array
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
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

return 0;
}
