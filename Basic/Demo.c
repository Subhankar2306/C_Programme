// Taking Input
#include <stdio.h>
int main()
{
    float r;
    printf("Enter the radious : ");
    scanf("%f", &r);
    float pi = 3.1415;
    float area = pi * r * r;
    printf("The area of Circle is : %f", area);

    return 0;
}