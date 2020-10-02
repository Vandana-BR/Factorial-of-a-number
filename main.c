#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    if(num==1 || num==0)
        return 1;
    else
        return(num *fact(num-1));
    
}

int main()
{
   int i,n;
   printf("enter the number: ");
   scanf("%d",&n);
   printf("%d",fact(n));
    return 0;
}
