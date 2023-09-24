#include<stdio.h>
// void fun(){
//     printf("Hello");
// }
int main(){
    void fun(); // Prototye declare
    fun();
    return 0;
}
void fun(){
    printf("Hello");
}