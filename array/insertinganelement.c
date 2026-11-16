//inserting element in an array the logic is that to insert an element somewhere in an array
//  we have to move the element that is already in that place backward for that we need to increase
//  the size of array
#include <stdio.h>
int main(){
int n; //no of elements in an array
printf("Enter n:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n;i++){
printf("Enter element %d of array is:",i+1);
scanf("%d",&arr[i]);
}
//to insert a new element first we need the position of the place where we want to add the new element also we need the new element
int new,pos;
printf("Enter the new element:");
scanf("%d",&new);
printf("Enter the new position:");
scanf("%d",&pos);
//now for the real condition first we need to increase the array
n=n+1;
//now we need to move all the array elements backward by one place 
for(int i=n-1;i>pos;i--){ //as we have increased n by 1 right but we will start by n-1 ,i>pos bcz we dont want to move to the right of position as we dont have any work there
        arr[i]=arr[i-1];}
arr[pos]=new;
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
return 0;
}