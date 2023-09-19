// Q4. print the factorial of given number 'n'
#include<stdio.h>
int main(){
    int product =1,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        product=product*i;
        printf("The factorial of %d mumbere is: %d\n",i,product);
    }
    

    return 0;
}