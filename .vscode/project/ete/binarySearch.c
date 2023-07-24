// Binary Search Algorithm
#include <stdio.h>

int binarySearch(int arr[], int start, int end, int key)
{
    int mid;
    if (end >= start)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else if (arr[mid] < key)
        {
            return binarySearch(arr, mid + 1, end, key);
        }
        else
        {
            return binarySearch(arr, start, mid - 1, key);
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the number of elements of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key element to find: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
    {
        printf("Element not found!");
    }
    else
    {
        printf("Element found at %d position", result);
    }
    return 0;
}