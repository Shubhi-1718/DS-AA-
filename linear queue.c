#include <stdio.h>

#include <stdlib.h>
void main()
{
    void enqueue(int [], int,int* , int* , int );
    void dequeue(int [], int,int*  , int* );
    int ch, item,n;
    int front,rear;
     front=rear=-1;
    printf("enter the size");
    scanf("%d",&n);
    int q[n];
    while (1)
    {
        printf("\n1.insertion ");
        printf("\n2. Deletion ");
        printf("\n3. Exit ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
        {    enqueue(q,n,&front,&rear,item);
            break;
        }
        case 2:
        {
            dequeue(q,n,&front,&rear);
            break;
        }    
        case 3:
            exit(0);
        }
    }
}
void enqueue(int q[], int n ,int *front, int *rear, int item)
{ 
    printf("enter the item");
    scanf("%d",&item);  

    if ((*front) == 0 && (*rear) == n - 1)
        printf("overflow");
    else
    {
        if ((*front) == -1)
            (*front) = (*rear) = 0;
        else
            (*rear)++;
    }
    q[*rear] = item;
    printf("\n%d",q[*front]);
    printf("\n%d",q[*rear]);
}
void dequeue(int q[], int n, int *front, int *rear)
{ 
    int item=q[*front];
    int item2;
    if (*front == -1)
        printf("underflow");
    else
    {
        if ((*front) == *rear)
            *front = *rear = -1;
        else
            *(front)++;
       printf("%d",item);
    }
    
}
