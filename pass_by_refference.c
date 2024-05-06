#include<stdio.h>
void func(int * p){
    *p = 100;
    printf("x in func = %p\n", p);
}
int main(){
    int x = 10;
    func(&x);
    printf("x in main function = %p\n", &x);
    printf("x in main function = %d\n", x);
    return  0;
}