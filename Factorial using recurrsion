#include <stdio.h>
int fact(int x);
int main()
{
    int x,res=0;
    printf("\nEnter a number ");
    scanf("%d",&x);
    if(x<0)
    printf("\nFactorial does not exit");
    else
    {
        res=fact(x);
         printf("\nFactorial of the number is %d",res);
    }
   
}
int fact(int x)
{
    if(x==0)
    return 1;
    else
    return x*fact(x-1);
}
