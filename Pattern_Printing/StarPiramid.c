// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the No. of row: ");
//     scanf("%d",&n);
//     for (int  i = 1; i <=n; i++)
//     {
//         for (int k = 1; k <= n-i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <=2*i-1; j++)   // Using Mathematical formula
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the No. of row: ");
    scanf("%d",&n);
    int nst=1; // Number of stars
    int nsp=6; // number of spaces
    for (int  i = 1; i <=n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        nsp--;
        for (int j = 1; j <=nst; j++)   // Using  extra Variable
        {
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
        
    }
    
    return 0;
}