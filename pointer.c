#include<stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    // printf("Address of x = %p\n", &x);
    // printf("Address of x = %p\n", p);
    // printf("Address of pointer = %p\n", &p);
    // printf("Value of X = %d\n", *p);
    *p = 100;
    printf("%d\n", x);
}