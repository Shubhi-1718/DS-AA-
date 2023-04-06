#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],n,sum=0;
printf("Enter no of elements in array(<20)");
scanf("%d",&n);
printf("\nENter %d elements ",n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
printf("\nSum of elements is %d",sum);
getch();
}
