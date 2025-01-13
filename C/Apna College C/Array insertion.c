#include <stdio.h>
void insertAtPosition(int arr[], int *n, int value, int
pos) {
    for (int i = *n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = value;
    (*n)++;
}
int main() {
    int arr[20], n, value, pos;
    printf("Size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Value to insert: ");
    scanf("%d", &value);
    printf("Position to insert at: ");
    scanf("%d", &pos);
    insertAtPosition(arr, &n, value, pos);
    printf("Updated array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
