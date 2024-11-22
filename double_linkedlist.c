#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left; 
    struct Node* right;  
};
struct Node* header = NULL;
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}
void insertAtFront(int data) {
    struct Node* newNode = createNode(data);
    if (header == NULL) {
        header = newNode;
    } else {
        newNode->right = header;
        header->left = newNode;
        header = newNode;
    }
}
void printList() {
    struct Node* temp = header;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->right;
    }
    
    printf("\n");
}

int main() {
    insertAtFront(10);
    insertAtFront(20);
    insertAtFront(30);
    printf("Doubly Linked List: ");
    printList();
    
    return 0;
}
