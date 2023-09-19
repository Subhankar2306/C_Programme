// Q4. print the FIbonacci of given number 'n'
#include <stdio.h>
int main()
{
    int a = 1, b = 1, sum = 1, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        
    }
        printf("The %dth Fibonacci is %d\n", n, sum);
    return 0;
}