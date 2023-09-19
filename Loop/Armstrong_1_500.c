// Q5. WAP to print out all Armstrong number between 1 and 500.
// Armstrong or nor check
// #include <stdio.h>
// int main()
// {
//     int n, r, sum = 0, temp;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     temp = n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = sum + (r * r * r);
//         n = n / 10;
//     }
//     if (temp == sum)
//         printf("Armstrong  number. ");
//     else
//         printf("Not Armstrong number.");
//     return 0;
// }
#include <stdio.h>
int main() {
    int i, sum,n, remainder, temp;
    printf("Enter the area of number : ");
    scanf("%d",&n);

    for (i = 1; i <=n; i++) {
        sum = 0;
        temp = i;

        while (temp != 0) {
            remainder = temp % 10;
            sum =sum+ remainder * remainder * remainder;
            temp = temp/ 10;
        }

        if (sum == i) {
            printf("%d is an Armstrong number\n", i);
        }
    }

    return 0;
}
