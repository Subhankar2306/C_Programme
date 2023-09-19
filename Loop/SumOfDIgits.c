//Q1. WAP to print SUM of digits of a given number.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int Sum =0;
//     int ld=0;
//     while (n!=0)
//     {
//        ld=n%10;
//        Sum=Sum+ld;
//        n=n/10;
//     }
//     printf("The sum of digits is: %d",Sum);
//     return 0;

// }
// Q2. WAP to print Sum of all The even digits of a given number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int Sum =0;
    int ld=0;
    while (n!=0)
    {
       ld=n%10;
       if(n%2==0){
       Sum=Sum+ld;
       }
       n=n/10;
    }
    printf("The sum of even digits is: %d",Sum);
    return 0;

}