#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1, c = 1;
for (int i = 1; i <=2*n-1; i++)
{
    for (int j = 1; j <=s; j++)
    {
       printf(" ");
    }
    for (int j = c; j >0; j--)
    {
       printf("%d", j);
    }
    if (i<n)
    {
      s--;
      c +=2;
    }
    else{
        s++;
        c-=2;
    }
    printf("\n");

}



}