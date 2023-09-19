// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the no. of rows: ");
//     scanf("%d",&n);
    
//     for (int i = 1; i <=n; i++)
//     {
//         int a=1;
//         for (int k = 1; k <= n-i; k++)
//         {
//             printf("  ");
//         }
//         for (int j = 1; j <=2*i-1; j++)  // Number Piramid
//         {
//             printf("%d ",j);
//         }
//         a++;
//         printf("\n");
//     }
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    
    for (int i = 1; i <=n; i++)
    {
        int a=1;
        for (int k = 1; k <= n-i; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <=2*i-1; j++)
        {
            int d=a+64;
            char ch = (char)d;  // Alphabate Piramid
            printf("%c ",ch);
            a++;
        }
        
        
        printf("\n");
    }
    
    return 0;
}