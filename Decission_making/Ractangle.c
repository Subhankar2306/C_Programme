// Given the length and bradth of a ractangle, write a program to find whether the area
// of ractangle is grater than its perimiter
#include <Stdio.h>
int main(int argc, char const *argv[])
{
    float b, l, a, p;
    printf("Enter the breadth of ractangle: ");
    scanf("%f", &b);
    printf("Enter the length of ractangle: ");
    scanf("%f", &l);
    a = l * b;
    p = 2 * (l + b);
    if (a > p)
    {
        printf("Area is grater than perimiter.");
    }
    else
    {
        printf("Area is less than perimiter.");
    }
    
    return 0;
}
