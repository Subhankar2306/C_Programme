#include <stdio.h>
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    return;
    }

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    // int temp;
    // temp=a;          // It is using third varable
    // a=b;
    // b=temp;

    // a = a + b;
    // b = a - b;      // It is using mathhematics
    // a = a - b;

    swap(a,b);         // It is using Function

    printf("The value of a after swaping: %d\n", a);
    printf("The value of b after swaping: %d", b);
    return 0;
}