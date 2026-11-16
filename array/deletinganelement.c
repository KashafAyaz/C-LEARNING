//deleting an array the logic behind is that we need to move forward 
// imagine we delete element no 0 in an array so element 1 will become element 0 and element 2 will become element 1 and so on
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
int delete;
printf("Enter the element that you want to delete:");
scanf("%d",&delete);
if(delete>=n || delete<0){
printf("not possibe");
}
else{
for(int i=delete;i<n-1;i++){
    arr[i]=arr[i+1];
    n=n-1;
}}
for(int i=0;i<=n;i++){
    printf("%d",arr[i]);
}
return 0;
}