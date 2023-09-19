// Q. Take two integers input, a and b : a>b, and find the reminder 
//     when a is divided by b.
#include <stdio.h>
int main()
{
    int a, b, q, r;
    printf("Enter the vslue of a:- ");
    scanf("%d", &a);
    printf("Enter the vslue of b:- ");
    scanf("%d", &b);
    q = a / b;
    r = a - (b * q);
    printf("The reminder when %d is divided by %d is: %d", a, b, r);
    return 0;
}