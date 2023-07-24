// Wap to find multiplication table of certain number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Emter the number you want multiplication table of::\t");
    scanf("%d",&n);


    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    

    return 0;
}
