#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    printf("Enter the array: \n");
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Choose the sorting technique to use:\n");
    printf("1 -> Insertion sort\n");
    printf("2 -> Selection sort\n");
    printf("3 -> Bubble sort\n");
    printf("4 -> Merge Sort\n");
    printf("5 -> Quick Sort\n");
    printf("Enter your option:");

    int status;
    scanf("%d", &status);

    switch (status)
    {

    case 1:
    {
        sort_by_insertion_and_print(arr, n);
    }
    break;

    case 2:
    {
        sort_by_selection_and_print(arr, n);
    }
    break;

    case 3:
    {
        bubbleSort_and_print(arr, n);
    }
    break;

    case 4:
    {
        mergesort_and_print(arr, n);
    }
    break;

    case 5:
    {
        quicksort_and_print(arr, n);
    }
    break;

    default:
    {
        printf("Enter a valid option from the menu!");
    }
    break;
    }
    return 0;
}
