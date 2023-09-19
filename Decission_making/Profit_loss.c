// Take cost price and selling price of any product and check it is 
// profit or not.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of cost price : ");
    scanf("%d",&a);
    printf("Enter the value of selling price : ");
    scanf("%d",&b);
    if (a<b)
    {
        printf("It is profit");
    }
    if(a>b){
        printf("It is loss");
    }
    if(a==b){
        printf("No profit & no loss");
    }
    
    return 0;
}
