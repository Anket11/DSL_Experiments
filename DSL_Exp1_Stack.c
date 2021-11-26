// Anket Patil
// A41
#include <stdio.h>
int STK[100], TOP = -1, i, n, x, choice;

// Function to Push
void Push()
{
    if (TOP >= n - 1)
    {
        printf(" Stack Overflow \n");
    }
    else
    {
        printf(" Enter the Element to be pushed: ");
        scanf("%d", &x);
        TOP++;
        STK[TOP] = x;
    }
}

// Function to Pop 
void Pop()
{
    if (TOP < 0)
    {
        printf(" Stack Underflow \n");
    }
    else
    {
        printf(" The popped Element is: %d \n", STK[TOP]);
        TOP--;
    }
}

// Function to Peep
void Peep()
{
    printf(" Enter the position of the element from the top which you want to Peep: ");
    scanf("%d", &i);
    if (TOP - i + 1 < 0)
    {
        printf(" Stack Underflow on Peep \n");
    }
    else
    {
        printf(" The %d Element from the top is: %d \n", i, STK[TOP - i + 1]);
    }
}

// Function to Change
void change()
{
    printf(" Enter the position of the element from the top which you want to Change: ");
    scanf("%d", &i);
    int new;
    printf("Enter new value:");
    scanf("%d", &new);
    if (TOP - i + 1 < 0)
    {
        printf(" Stack Underflow on Change \n");
    }
    else
    {
        printf(" The old %d Element from the top was: %d \n", i, STK[TOP - i + 1]);
        STK[TOP - i + 1] = new;
        printf(" The new %d Element from the top is: %d \n", i, STK[TOP - i + 1]);
    }
}

// Function to Display 
void Display()
{
    if (TOP < 0)
    {
        printf(" Stack is empty \n");
    }
    else
    {
        printf(" The Element in the stack are:");
        for (i = TOP; i > -1; i--)
        {
            printf("\n %d \n", STK[i]);
        }
    }
}

int main()
{
    printf("\t Stack implementation using Array \n");
    printf("Enter the size of Stack (Maximum size = 100): ");
    scanf("%d", &n);
    do
    {
        printf("\n Select Stack Operation: \n");
        printf("\t1.Push\t 2.Pop\t 3.Peep\t 4.Change\t 5.Display\t 6.Exit \n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peep();
            break;
        case 4:
            change();
            break;
        case 5:
            Display();
            break;
        case 6:
            printf("Exit: Program Finished !! ");
            break;
        default:
            printf("Please enter a valid choide: 1, 2, 3, 4, 5 \n");
        }
    } while (choice != 6);
}
