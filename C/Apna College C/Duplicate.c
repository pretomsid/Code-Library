#include <stdio.h>

// Function to delete an element at a specific position
void deleteAtPosition(int arr[], int *n, int pos)
{
    // Shift elements to the left
    for (int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // Decrease the size of the array
    (*n)--;
}

int main()
{
    int arr[10], n, pos;

    // Input the size of the array
    printf("Size (max 10): ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete
    printf("Position to delete: ");
    scanf("%d", &pos);

    // Check if the position is valid
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position!\n");
        return 1; // Exit the program if the position is invalid
    }

    // Call the function to delete the element
    deleteAtPosition(arr, &n, pos);

    // Display the array after deletion
    printf("After deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
