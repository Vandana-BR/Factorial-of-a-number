#include <stdio.h>
#include <stdlib.h>
#define p printf(
#define s scanf(
#define m printf("\n")

int fact(int num)
{
    int res;
    if(num==1 || num==0)
        return 1;
    else
        res=num *fact(num-1);
    return res;
}

int main()
{
   int i,n;
   p"enter the number: "f;
   s"%d",&n f;

   i=fact(n);
   p"%d",i f;
    m;

    return 0;
}
