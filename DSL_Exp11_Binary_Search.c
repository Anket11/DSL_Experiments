// Anket Patil
// A41
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n);

int main()
{
    int arr[100], i, n, x, choice, flag = 0;
    printf("IMPLEMENTATION OF BINARY SEARCH\n");
    printf("Enter the number of elements of the array [maximum size = 100] : \n");
    scanf("%d", &n);
    printf("Enter %d elements of the array : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    insertionSort(arr, n);
    do
    {
        printf("\n !! -- Operations available -- !!");
        printf("\n 1. Display Sorted List \t 2. Search a particular value \t 3. Exit");
        printf("\n Please Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nThe sorted array is : \n");
            for (i = 0; i < n; i++)
            {
                printf(" %d \t", arr[i]);
            }
            printf("\n");
            break;
        }
        case 2:
        {
            printf("\n Enter the number to be searched : ");
            scanf("%d", &x);
            int beg = 0, end = n - 1, mid;
            while (beg <= end)
            {
                mid = (beg + end) / 2;
                if (arr[mid] == x)
                {
                    printf("\n %d is present in the sorted array at index : %d", x, mid);
                    flag = 1;
                    break;
                }
                else if (arr[mid] > x)
                {
                    end = mid - 1;
                }
                else
                {
                    beg = mid + 1;
                }
            }
            if (beg > end || flag == 0)
            {
                printf("\n %d does not exist int the array", x);
            }
            break;
        }
        case 3:
        {
            printf("\n Program Finished !! Thank You");
            break;
        }
        default:
        {
            printf("\n Please enter a valid choice 1, 2, 3.");
        }
        }
    } while (choice != 3);
    return 0;
}

void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
