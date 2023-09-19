// Take 3 positive integr input and print the gratest of them

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest of this three number.", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest of this three number.", b);
    }
    if (c > a && b > b)
    {
        printf("%d is greatest of this three number.", c);
    }

    return 0;
}
