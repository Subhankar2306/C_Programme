#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of Rows : ");
    scanf("%d",&n);
    printf("Enter the number of Columns : ");
    scanf("%d",&m);
    for (int i = 1; i <=n; i++) // Outer loop sinifies --> no of lines
    {
        for (int i = 1; i <=m; i++){     // inner loop signifies--> no of star each line
            printf("*");
        }
        printf("\n");
    
    }
    
    return 0;
}
             // Note: Number of lines are known as number of rows
             //       number of each lies are known as columns