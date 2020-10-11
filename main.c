#include <stdio.h>
#include <stdlib.h>

int fact(int x)
{
    int result;
    if(num==1 || num==0)
        return true;
    else
        result=x *fact(x-1);
    return result;
}

int main()
{
   int i,num;
   printf("enter the number: ");
   scanf("%d",&num);

   i=fact(num);
   printf("%d",i);


    return 0;
}
