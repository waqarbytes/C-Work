#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3

typedef struct QueueNode {
    int data;
    struct QueueNode *next;
} QueueNode;

QueueNode *front = NULL;
QueueNode *rear = NULL;

void enqueue(int item) {
    QueueNode *newNode = (QueueNode *)malloc(sizeof(QueueNode));
    newNode->data = item;
    newNode->next = NULL;
    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    QueueNode *temp = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    printf("Dequeued item is %d\n", temp->data);
    free(temp);
}

void display() {
    QueueNode *temp = front;
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue contents are:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, item;

    while (1) {
        printf(" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter the value to enqueue:");
            scanf("%d", &item);
            enqueue(item);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            return 0;
        default:
            printf("Invalid Choice!!\n");
        }
    }
    return 0;
}