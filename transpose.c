#include<stdio.h>
void main()
{
    int a[20][20], b[20][20];
    int i,j,k,r1,c1,r2,c2,sum=0;
    printf("Enter row and column for A");
    scanf("%d %d",&r1,&c1);
   
        printf("\nENter %d elements for A",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
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
       
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
              b[j][i]=a[i][j];
            }
        }
        printf("\nAfter transpose \n");
        for(i=0;i<c1;i++)
        {
            for(j=0;j<r1;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
    
    
}
