#include<stdio.h>
void main()
{
    int a[20][20],int b[20][20],c[20][20];
    int i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter row and column for A");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter row and column for B");
    scanf("%d %d",&r2,&c2);
    if(r1==r2 && c1==c2)
    {
        printf("\nENter %d elements for A",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter %d elements for B",r2*c2);
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nelements for A\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
        printf("\nelements for B \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\nAfter addition \n ")
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    else 
    printf("\nAddition not possible");
    }
}
