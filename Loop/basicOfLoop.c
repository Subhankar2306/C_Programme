#include<stdio.h>
int main()
{   int i;
    int n;
    printf("Enter the number you want to print: ");
    scanf("%d",&n);
    printf("Welcome to Loop...\n");
    for (i = 1; i <=n; i++) // It is normal increment 
    // for (i = 1; i <=n; i=i+2)  // It is for increamenting 2 step of loop
    {
      printf("Subhankar\n");
    }
    printf("%d",i);
    return 0;
}
