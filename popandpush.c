#include <stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

void push(int value)
{
    if (top >= MAX_SIZE - 1)
    {
        printf("Stack Overflow! Can't push %d into the stack.\n", value);
        return;
    }
    top++;
    stack[top] = value;
    printf("%d pushed into the stack.\n", value);
}

void pop()
{
    if (top < 0)
    {
        printf("Stack Underflow! Can't pop an element from the stack.\n");
        return;
    }
    int popped = stack[top];
    top--;
    printf("%d popped from the stack.\n", popped);
}

void display()
{
    if (top < 0)
    {
        printf("Stack is empty. Nothing to display.\n");
        return;
    }
    printf("Elements in the stack:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf(" 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to push:");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            pop();
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