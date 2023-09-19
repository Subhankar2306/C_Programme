#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++)
    {
        int a = i-1;
        for (int k = 1; k <= n-i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",j);
            
        }
        for (int l = 1; l <=i-1; l++)
        {
            printf("%d ",a);
            a--;
        } 
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no. of rows: ");
//     scanf("%d",&n);
    
//     for (int i = 1; i <=n; i++)
//     {
//         for (int k = 1; k <= n-i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             int d= j+64;
//             char ch = (char)d;  // Alphabate Piramid
//             printf("%c ",ch);
//         }
//         int a = i-1;
//         for (int l = 1; l <=i-1; l++)
//         {
//             int f=a+64;
//             char ch = (char)f;
//             printf("%c ",ch);
//             a--;
//         } 
//         printf("\n");
//     }
//     return 0;
// }