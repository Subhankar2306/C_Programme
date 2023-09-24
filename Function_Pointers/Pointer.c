#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;        //int* -->  It store address of int
    // VVI --> *x=7;    // a is changed
    int **y = &x;       // int** --> It store address of int*
    int ***z = &y;
    printf("%d\n", a);
    printf("%d\n", *x);   // %p for printing the address
    printf("%d\n", **y);  // Double Pointer
    printf("%d\n", ***z); // Triple Pointer
    return 0;
}