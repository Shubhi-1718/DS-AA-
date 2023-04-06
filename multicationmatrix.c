#include<stdio.h>
void main()
{
    int a[20][20], b[20][20],c[20][20];
    int i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter row and column for A");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter row and column for B");
    scanf("%d %d",&r2,&c2);
    if(r2=c1)
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
        printf("\nelements for B\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(int k=0;k<c1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
            c[i][j]=sum;    
            }
        }
        printf("\nAfter multiplication \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    
    }
    else
    printf("\nMultiplication not possible");
}
