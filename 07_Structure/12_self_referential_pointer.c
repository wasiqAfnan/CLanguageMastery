#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;            // Data stored in the node
    struct Node* next;   // Pointer to the next node
};

int main() {
    // Create the first node
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1; // data stored in head
    head->next = second; // pointing head to next node

    second->data = 2; // data stored in second 
    second->next = NULL; // pointing to null as second is the last node

    // Free the allocated memory
    free(head);
    free(second);

    return 0;
}
