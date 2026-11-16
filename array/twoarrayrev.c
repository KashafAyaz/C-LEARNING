//reversing an array
#include<stdio.h>
int main(){
int arr[5]={6,7,6,8,6};
for(int i=4;i>=0;i--){
printf("%d ",arr[i]);
}
return 0;
}
//subsitute method:
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int brr[5];
//     for(int i=0;i<=4;i++){
//         brr[i]=arr[4-i];
//     }
//     for(int i=0;i<=4;i++){
//     printf(" %d ",brr[i]);}
//     return 0;
// }