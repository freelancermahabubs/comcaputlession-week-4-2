#include<stdio.h>
void func(int x){
    x = 100;
    printf("x in func = %d\n", x);
}
int main(){
    int x = 10;
    func(x);
    printf("x in main function = %d\n", x);
    return  0;
}