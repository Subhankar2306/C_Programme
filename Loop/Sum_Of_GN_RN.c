// Q3. WAP to print sum of a given number and it's reverse.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int r =0;
//     while (n!=0)
//     { 
//        r=r*10;
//        r=r+(n%10);
//        n=n/10;
//     }
//     printf("The reversce number is: %d\n",r);
//     r=n+r;
//     printf("The sum of given number and reverse number is:%d",r);
//     return 0;

// }
#include <stdio.h>

int main() {
  int n, rev = 0, sum = 0, r;

  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0) {
    r = n % 10;
    sum += r;
    rev = rev * 10 + r;
    n /= 10;
  }

  printf("The sum of the number and its reverse is: %d\n", sum + rev);

  return 0;
}
