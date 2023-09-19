#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // int a=0;
    for (int i = 1; i <=100; i++)
    {
        // if (i%2!=0)  // It for Even number 
        if(i%2==0)     // It for Odd number
        {
            
           continue;
        }
        printf("%d ",i);
    }

    return 0;

}