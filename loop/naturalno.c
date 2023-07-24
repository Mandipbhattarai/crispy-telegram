// WAP TO find natural number 
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;
  printf("Enter the number of natural numbers to be printed::");
  scanf("%d",&n);
printf("The first %d natural numbers is:: \n", n);
  for (int i = 1; i <= n; i++)
  {
    printf("%d\t",i);
  }
    
    
    return 0;
}
