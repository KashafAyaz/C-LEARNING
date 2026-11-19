#include <stdio.h>   
#include <stdlib.h>  // Required for malloc(), free(), and NULL

struct node {
    int data;           // Stores the actual integer value
    struct node *link;  // Pointer to hold the memory address of the next node
};

int main() {
    struct node *head = NULL; // Initialize head pointer to NULL to avoid garbage addresses
    
    // Allocate memory on the heap for the 1st node and store its address in 'head'
    head = (struct node*)malloc(sizeof(struct node));
    
    head->data = 45;    // Assign the value 45 to the 1st node's data field
    head->link = NULL;  // Set link to NULL since there is no second node yet


    // Allocate a separate block of memory on the heap for the 2nd node
    struct node *current = (struct node*)malloc(sizeof(struct node));
    
    current->data = 98;    // Assign the value 98 to the 2nd node's data field
    current->link = NULL;  // Set link to NULL as this is currently the last node
    // Overwrite head->link (which was NULL) with the memory address of the 2nd node
    head->link = current;
    // Access the 1st node's data directly through 'head'
    printf("First node: %d\n", head->data);
    
    // Start at 'head', follow 'link' to the 2nd node, and access its 'data'
    printf("Second node: %d\n", head->link->data);
    free(current);  // Release the heap memory allocated for the 2nd node
    free(head);     // Release the heap memory allocated for the 1st node

    return 0;       
}