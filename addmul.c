#include <stdio.h>
void read(int a[20][20], int r, int c)
{
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
}
void write(int a[20][20],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
void add(int a[20][20],int b[20][20],int r1, int c1)
{
    int c[20][20];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nMatrix after addition si\n ");
    write(c,r1,c1);
}
void mul(int a[20][20],int b[20][20], int r1, int c1,int r2,int c2)
{
    int sum,c[20][20];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            sum=0;
           for(int k=0;k<c1;k++)
           {
           sum=sum+a[i][k]*b[k][j];
           }
           c[i][j]=sum;
        }
    }
    printf("\nmultiplication of the matrix\n ");
    write(c,r1,c2);
}
int main() 
{
    int ch,a[20][20],b[20][20],r1,r2,c1,c2;
    
    printf("\nEnter r1");
    scanf("%d",&r1);
    printf("\nEnter c1");
    scanf("%d",&c1);
    printf("\nEnter r2");
    scanf("%d",&r2);
    printf("\nEnter c2");
    scanf("%d",&c2);
    printf("\n****MENU****");
    printf("\n1.Multiplication");
    printf("\n2. Addition");
    printf("\nEnter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 : if(c1==r2)
            {
                printf("\nEnter %d elements for matrix A \n",r1*c1);
                read(a,r1,c1);
                 printf("\nEnter %d elements for matrix B \n",r2*c2);
                read(b,r2,c2);
                printf("\nElmements of matrix  A is \n");
                write(a,r1,c1);
                printf("\nElmements of matrix  B is \n");
                write(b,r2,c2);
                mul(a,b,r1,c1,r2,c2);
            }
             else
             printf("\nmultiplication not possible");
             break;
    case 2: if(r1==r2 && c1==c2)
            {
                printf("\nEnter %d elements for matrix A \n",r1*c1);
                read(a,r1,c1);
                printf("\nEnter %d elements for matrix B \n",r1*c1);
                read(b,r1,c1);
                printf("\nElmements of matrix  A is \n");
                write(a,r1,c1);
                printf("\nElmements of matrix  B is \n");
                write(b,r2,c2);
                add(a,b,r1,c1);
            }
            else
            printf("\nAddition not possible ");
            break;
    default: printf("\nWrong Choice ");
    }
    return 0;
}
