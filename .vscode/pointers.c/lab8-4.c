#include <stdio.h>
void doubleAll(int arr[],int n){ //arr[] is an array and n is its length it returns nothing
printf("Inside : arr =%p\n",arr); //print address that arr is pointing to
printf("Inside : sizeof =%d bytes\n",sizeof(arr));
for(int i=0;i<n;i++){
    arr[i] = arr[i] *2; //double every element of array using loop
}
}
int main(void){
    int num[5]={1,2,3,4,5}; //real array with 5 integers in memory
    int n = sizeof(num)/sizeof(num[0]); // sizeofnum=5*4=20 , n=20/4=5
    printf("in main : &num[0]= %p\n",&num[0]); //prints the address of first element
    printf("in main : size of = %d bytes\n",sizeof(num)); //prints size of the num and here array is real so its 
    //size is 20 bytes

 doubleAll(num,n);
 printf("after call\n");
 for(int i=0;i<n;i++)
{
printf("%d",num[i]);
}

printf("\n");
return 0;
}