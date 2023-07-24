#include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(unsigned int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(unsigned char));
    printf("%lu\n", sizeof(int));
    printf("%lu", sizeof(unsigned long));

    return 0;
}