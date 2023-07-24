#include <stdio.h>

union job
{
    float salary;
    int worker_no;
};

int main()
{
    union job j1;
    union job *ptr = &j1;

    printf("Enter the salary: ");
    scanf("%f", &(ptr->salary));

    printf("Enter the worker ID: ");
    scanf("%d", &(ptr->worker_no));

    printf("Salary: %.2f\n", ptr->salary);
    printf("Worker ID: %d\n", ptr->worker_no);

    return 0;
}
