#include <stdio.h>
int main()
{
    float B, DA, HRA, TA, GROSS;
    printf("Enter the basic amount : ");
    scanf("%f", &B);
    DA = B * 5 / 100;
    HRA = B * 10 / 100;
    TA = B * 7 / 100;
    GROSS = B + HRA + DA + TA;
    if (B > 20000)
    {
        GROSS = GROSS + GROSS * 10 / 100;
    }
    else
    {
        GROSS = GROSS + GROSS * 2 / 100;
    }
    printf("The salary is: %0.2f ", GROSS);
    return 0;
}