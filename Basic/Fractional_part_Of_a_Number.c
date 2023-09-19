// Q. Take float number as input and print the fractinal part of the real number.

#include <stdio.h>
int main()
{
    float x;    // Declare float variable 
    printf("Plese enter your Decimal mumber:- ");
    scanf("%f", &x);  // Take input float variable
    int y;
    y = x;
    printf("The gratest integer number of %0.1f is:- %d \n", x, y);
    float z = x - y;
    printf("The fractional part of %0.1f is :- %0.1f", x, z);
    return 0;
}
