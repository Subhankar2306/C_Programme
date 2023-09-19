// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of Rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a = 1;
//         for (int j = 1; j <= n; j++)
//         {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c  ", ch);
//             a++;                      //--> A B C D
//         }                             //--> A B C D
//         printf("\n");
//     }

//     return 0;
// }                            

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;          //--> A
            printf("%c  ", ch);         //--> A B
            a++;                        //--> A B C
        }
        printf("\n");
    }

    return 0;
}
