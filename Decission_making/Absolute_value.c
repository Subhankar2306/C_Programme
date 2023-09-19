#include<stdio.h>
int main(){
    int x;
    printf("Enter the number:- ");
    scanf("%d",&x);
    if (x<0)
    {
        x=x*(-1);
    }
    printf("The absolute value is : %d",x);  // The absolute value of any number is its positive value like -7 = 7.
    return 0;

    

}