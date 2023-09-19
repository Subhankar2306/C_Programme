// Display this GP - 100,50,25,...Upto 'n' term
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    float a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%0.2f ", a);
        a = a * 1 / 2;
        // printf("%d",a);
    }

    return 0;
}
