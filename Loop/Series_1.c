// Q3. Print the sum of this series: 1-2+3-4+5-6....Upto 'n'.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    // odd numbers -> add
    // enven numbers -> subtract
    int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //    if(i%2!=0) sum=sum+i;
    //    else sum=sum-i;
    // }
    if (n%2==0)
    {
        sum=-n/2;
    
    }  
    else sum= -n/2+n;     
    
    printf("The sum of above series is: %d",sum);
    
    return 0;

}