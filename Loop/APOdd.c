#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the nukmber:");
    scanf("%d",&n);
    for (i = 4; i <=3*n+1; i=i+3)
    {
       printf("%d ",i);
    }
    // printf("%d",i);
    return 0;
}