#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    int a=n;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= n+1-i; j++)
        for (int j = 1; j <= a; j++)

        {
            printf("*  ");
        }
        a--;
        printf("\n");
    }

    return 0;
}
