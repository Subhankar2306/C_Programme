#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x; // temp = a
    *x=*y;   // a = b
    *y=temp; // b = temp
    return;
    }

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    swap(&a,&b);         // It is using Function

    printf("The value of a after swaping: %d\n", a);
    printf("The value of b after swaping: %d", b);
    return 0;
}