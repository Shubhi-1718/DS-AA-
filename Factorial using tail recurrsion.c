#include <stdio.h>
int fact(int x,int);
int initial=1;
int main()
{
    int x,res=0;
    printf("\nEnter a number ");
    scanf("%d",&x);
    if(x<0)
    printf("\nFactorial does not exit");
    else
    {
        res=fact(x,initial);
         printf("\nFactorial of the number is %d",res);
    }
   
}
int fact(int x,int initial)
{
    
    if(x==0)
    return initial;
    else
    return fact(x-1,x*initial);
}
