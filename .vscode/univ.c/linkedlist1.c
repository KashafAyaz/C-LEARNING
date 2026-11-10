#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node *head = NULL; // Global head pointer

Node* createNode(int value) {
    Node* n = malloc(sizeof(Node));
    if (n==NULL) {
        printf("out of Memory\n");
        return NULL;
    }
    n->data = value;
    n->next = NULL;
    return n;
}

int insert_front(int value) {
    Node* n = createNode(value);
    if (n == NULL) {
        return 0; // Memory allocation failed
    }
    n->next = head;
    head = n;
    return 1; // Success
}
void print_list(){
    for(Node* current = head; current != NULL; current = current->next) {
        printf("%d -> ", current->data);
    }
    printf("NULL\n");
}
int length() {
    int count = 0;
    for(Node* current = head; current != NULL; current = current->next) {
        count++;
    }
    return count;
}
int insert_end(int value) {
    Node* n = createNode(value);
    if (n == NULL) {
        return 0; // Memory allocation failed
    }
    if (head == NULL) {
        head = n;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = n;
    }
    return 1; // Success
}
int front() {
    if (head == NULL) {
        printf("List is empty\n");
        return -1; // Indicate that the list is empty
    }
    return head->data;
}
int delete_front() {
    if (head == NULL) {
        printf("List is empty\n");
        return 0; // Indicate that the list is empty
    }
    Node* temp = head;
    head = head->next;
    free(temp);
    return 1; // Success
}
int main() {
    insert_end(5);
    insert_end(15);
    insert_front(10);
    insert_front(20);
    insert_front(30);
    insert_end(25);
    insertdelete_front();
    print_list(); // Output: 30 -> 20 -> 10 -> NULL
    printf("Length of list: %d\n", length()); // Output: Length of list: 3
    printf("Front element: %d\n", front()); // Output: Front element: 30
    delete_front();
    print_list(); // Output: 20 -> 10 -> NULL
    return 0;}