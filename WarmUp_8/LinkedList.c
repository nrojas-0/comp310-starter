#include <stdio.h>
#include <stdlib.h>
//Used Chatgpt for this WarmUp to understand how to implement into c, as I had done this before but with multiple libraries in neils class

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Linked list structure
struct LinkedList {
    struct Node* head;
};

// Function to create a new node with the given data
struct Node* createNode(int d) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = d;
    newNode->next = NULL;
    return newNode;
}

// Function to add a new node with the given data to the beginning of the list
void push(struct LinkedList* llist, int new_data) {
    struct Node* new_node = createNode(new_data);
    new_node->next = llist->head;
    llist->head = new_node;
}

// Function to delete a node with the specified key from the list
void deleteNode(struct LinkedList* llist, int key) {
    struct Node* temp = llist->head;
    struct Node* prev = NULL;

    // If the node to be deleted is the head
    if (temp != NULL && temp->data == key) {
        llist->head = temp->next;
        free(temp);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present in the list
    if (temp == NULL) return;

    // Unlink the node from the linked list
    prev->next = temp->next;

    // Free the memory of the node to be deleted
    free(temp);
}

// Function to print the elements of the linked list
void printList(struct LinkedList* llist) {
    struct Node* tnode = llist->head;
    while (tnode != NULL) {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
    printf("\n");
}

int main() {
    // Create a linked list
    struct LinkedList llist;
    llist.head = NULL;

    // Add elements to the linked list
    push(&llist, 7);
    push(&llist, 1);
    push(&llist, 3);
    push(&llist, 2);

    // Print the original linked list
    printf("Created Linked list is: ");
    printList(&llist);

    // Delete a node with value 1
    deleteNode(&llist, 1);

    // Print the updated linked list
    printf("Linked List after Deletion of 1: ");
    printList(&llist);

    return 0;
}
