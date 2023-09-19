#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the positive integer: ");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("It is three digit integer number.");
    }
    else{
        printf("It is not three digit integer number. ");
    }
    return 0;
}
