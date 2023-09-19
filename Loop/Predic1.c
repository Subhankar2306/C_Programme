#include<stdio.h>
int main(){
    int j;  // Here value of J is not defined so it's take automatically Garbage value.
    while(j<=10){
        printf("\n%d ",j);
        j=j+1;
    }
   return 0;
}