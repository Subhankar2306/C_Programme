#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    // printf("Enter the number of Columns : ");
    // scanf("%d",&m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
