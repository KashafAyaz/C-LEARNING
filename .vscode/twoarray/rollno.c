#include<stdio.h>
int main(){
int arr[4][2]={{1,20},{2,30},{3,25},{4,40}};
for(int i=0;i<4;i++){
for(int j=0;j<2;j++){   
printf("roll no:%d marks:%d ",arr[i][0],arr[i][1]);
}
printf("\n");
}
return 0;
}