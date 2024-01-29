#include <stdio.h>
#include <stdlib.h>
//Used Chatgpt to understand how to implement the linked list in C without the use of multiple other libraries

int main(){
    struct LinkedList llist;
    llist.push(7); //Add numbers to linked list
    llist.push(1);
    llist.push(3);
    llist.push(2);
    printf("\nCreated Linked list is: \n");
    printList(&llist);

    deleteNode(&llist, 1); //deleting from linked list

    printf("\nLinked List after Deletion of 1: \n");
    printList(&llist);
    printf("\n");
    return 0;
}