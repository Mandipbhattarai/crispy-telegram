#include <stdio.h>
int larger(int n, int arr[n])
{
    int a = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    return a;
}

int main()
{
    int n, large;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    large = larger(n, arr);
    printf("The large number is %d", large);

    return 0;
}
