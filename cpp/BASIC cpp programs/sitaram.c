#include <stdio.h>
int main()
{
    int math, cpps, chem, eng, beee, total, percent;
    printf(" enter the marks of math");
    scanf("%d", &math);
    printf("enter the marks of chem");
    scanf("%d", &chem);
    printf("enter the marks of cpps");
    scanf("%d", &cpps);
    printf("enter the marks of beee");
    scanf("%d", &beee);
    printf("enter the marks of eng");
    scanf("%d", &eng);
    if (math < 40 || chem < 40 || cpps < 40 || beee < 40 || eng < 40)
    {
        printf(" failed the exam");
        return 0;
    }
    total = chem + beee + cpps + math + eng;
    printf("the total marks =%d\n", total);
    percent = (total * 100) / 500;
    if (percent >= 75)
    {
        printf(" distinction");
    }
    else if (percent >= 60 && percent < 75)
    {
        printf(" first class");
    }
    else if (percent >= 50 && percent < 60)
    {
        printf("second class");
    }
    else if (percent >= 40 && percent < 50)
    {
        printf("third class");
    }
    else
    {
        printf("failed");
    }
    return 0;
}
