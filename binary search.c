
#include <stdio.h>
int binarysearch(int a[],int element,int size)
{
    int beg=0,end=size-1,mid;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==element)
        return mid;
        else
        if(a[mid]>element)
        beg=mid+1;
        else
        end=mid-1;
    }
    return -1;
}
int main()
{
    int a[10];
    int x,element,res;
    printf("\nEnter the size of array  ");
    scanf("%d",&x);
    printf("\nEnter the elements in the array");
    for(int i=0;i<x;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the element to find ");
    scanf("%d",&element);
    res=binarysearch(a,element,x);
    if(res>=0)
    printf("\nValue found at location %d",res);
    else
    
    printf("\nValue not found");
}
