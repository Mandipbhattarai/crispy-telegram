// Linear Search Algorithm
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int n, a;
    printf("Enter the number of elements of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    a = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the key element to find: ");
    scanf("%d", &key);
    int result = linearSearch(arr, a, key);
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