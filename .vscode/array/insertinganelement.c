#include <stdio.h>
int main(){
int arr[10], n, x, pos;
for (int i = 0; i < 10; i++)
printf("Enter element %d of elements (1-9)\n", i + 1);
scanf("%d", &n);                    // how many values are already in the array
 for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);          // read them
printf("Enter element to be inserted: ");
scanf("%d", &x);                    // the new value
printf("Enter position: ");
scanf("%d", &pos);                  // where it should go (index)
n = n + 1;                          // the array will now hold one more value
for (i = n - 1; i > pos; i--)
 arr[i] = arr[i - 1];          // shift right, starting from the END
arr[pos] = x;                      // put the new value in the gap
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
return 0;
}