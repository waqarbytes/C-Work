#include <stdio.h>
#include <stdlib.h>

// Structure of a Node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to add an element at the end of the queue
void enqueue(Node** queue, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*queue == NULL) {
        *queue = newNode;
    } else {
        Node* temp = *queue;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to remove an element from the beginning of the queue
int dequeue(Node** queue) {
    if (*queue == NULL) {
        printf("Queue is empty\n");
        return -1;
    }

    Node* temp = *queue;
    int removedData = temp->data;
    *queue = temp->next;

    free(temp);

    return removedData;
}

// Function to display the elements of the queue
void display(Node* queue) {
    if (queue == NULL) {
        printf("Queue is empty\n");
        return;
    }

    Node* temp = queue;
    printf("Elements in the queue are:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* queue = NULL;

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);

    display(queue);

    int removedElement = dequeue(&queue);
    printf("Removed element from the queue: %d\n", removedElement);

    display(queue);

    return 0;
}