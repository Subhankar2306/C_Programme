#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=0;
    for (int i = 2; i <=n-1; i++)
    {
        if (n%i==0)
        {
            printf("The given number is Composit");
            a=1;
            break;
        }
        if(n==1) printf("1 is neither prime nor composit munber.");
        else if (n==0) printf("The number is Even number.");
        else printf("The given number is Composit number. ");
        
    }

    return 0;

}