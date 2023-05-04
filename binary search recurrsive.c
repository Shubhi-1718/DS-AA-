#include <stdio.h>
int binarysearch(int a[],int beg,int end,int element)
{
    if(beg<=end)
    {
    int mid=(beg+end)/2;
    if(a[mid]==element)
    return mid;
    else
    if(a[mid]<element)
    return binarysearch(a,mid+1,end,element);
    else
    return binarysearch(a,beg,mid-1,element);
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
    res=binarysearch(a,0,x-1,element);
    if(res>=0)
    printf("\nValue found at location %d",res);
    else
    printf("\nValue not found");
}
