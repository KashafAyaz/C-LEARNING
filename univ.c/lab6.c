//elements stored at contiguous(aik ke bad aik sath element store like 1 first then 2 then 3 etc) memory locations
//elements will be of the same data type (int arr[5] [this is the size example:5])
//indexing in array starts at 0 (like for 1st element is 1 so its arr[0] not arr[1] )
//the size of the array should be known at compile time(array size is the same which you have stored first you cant change it)
#include <stdio.h>
int main(){
int arr[5]; //declare karwaya he only 5 elements can fit
//int arr[5] = {10,20,30,40,50}; //initialized and declared 
//int arr[5] = {1,2}; // size is 5 but only 2 are present
//int arr[] = {1,2,3}; //here we did not specify the size so array size will be considered as 3
//printf("the element %d is stored at memory location %p\n",arr[0],&arr[0]);//it starts at 0 bcz od indexing
//printf("the element %d is stored at memory location %p\n",arr[1],&arr[1]);//&arr is used to get address
//printf("the element %d is stored at memory location %p\n",arr[2],&arr[2]);//%p is used to print pointer(memory address)
//printf("the element %d is stored at memory location %p\n",arr[3],&arr[3]);
//printf("the element %d is stored at memory location %p\n",arr[4],&arr[4]);
for (int i=0;i<5;i++){
//printf("the element %d is stored at memory location %p\n",arr[i],&arr[i]);
printf("enter element %d\n",i);
scanf("%d",&arr[i]);
arr[i]+=5;
}
printf("following are the elements of the array\n");
for(int i=0;i<5;i++){
printf("arr[%d]=%d\n",i,arr[i]);
}
return 0;
}