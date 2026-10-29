
#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = 0, rear = -1;

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;

    do
    {
        printf("\nQueue Operations\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exit.\n");
                break;

            default:
                printf("Please select a valid choice.\n");
        }

    } while (choice != 4);

    return 0;
}

void enqueue()
{
    int item;

    if (rear == MAX - 1)
    {
        printf("Queue is full.\n");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &item);

    queue[++rear] = item;
    printf("%d inserted into the queue.\n", item);
}

void dequeue()
{
    if (front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;
}

void display()
{
    int i;

    if (front > rear)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");

    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

