// Anket Patil
// A41
#include <stdio.h>

void insert(void);
void delete (void);
void display(void);

int queue[100], n, choice, i;
int front = -1;
int rear = -1;

int main()
{
    printf("Enter the Size of Queue (Maximum 100): ");
    scanf("%d", &n);
    
    // Choice Selection
    do
    {
        printf("Enter Your Choice \n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit");
            break;
        default:
            printf("Invalid choice");
        }
    } while (choice != 4);
}

// Insertion
void insert()
{
    int num;
    if (rear >= n - 1)
        printf("Queue is Overflow \n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter the Element to insert\n");
        scanf("%d", &num);
        rear = rear + 1;
        queue[rear] = num;
    }
}

// Deletion
void delete ()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Underflow \n");
    }
    else
    {
        printf("Element deleted from is : %d\n", queue[front]);
        front = front + 1;
    }
}

// Display
void display()
{
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}