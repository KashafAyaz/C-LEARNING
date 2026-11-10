#include <stdio.h> //using multiple calls
int main(){
int arr[4][2]={1,10,2,20,3,30,4,40};
for(int i=0;i<4;i++){
for(int j=0;j<2;j++){   
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}