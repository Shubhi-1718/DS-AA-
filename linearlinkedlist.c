#include<stdio.h>
#include<process.h>
#include<alloc.h>
//Declaration of Structure
typrdef struct simplelink 
{
    int data;
    struct simplelink *next;
}node;
//Creation of first node
node *create(node *p)
{
    p=(node *)malloc(sizeof(node));
    int a;
    printf("\n\n");
    node *brr[25];
    int arr[25];
    a=0;
    while(p!=NULL)
    {
        arr[a]=p->data;
        brr[a]=p->next;
        p=p->next;
        a++;
    }
    for(int i=(a-1);i>=0;i--)
    printf("[%d,%u]<--",arr[i],brr[i]);
    printf("HEAD");
    printf("\n\n\nPress any key to continue...................");
    getch();
}
//Insert at beginning 
node *insert_begin(node *p)
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    printf("\nEnter the inserted data: ");
    scanf("%d",&temp->data);
    temp->next=p;
    p=temp;
    return(p);
}
//Insert at end 
node *insert_end(node *p)
{
node *temp,*q;
q=p;
temp=(node *)malloc(sizeof(node));
printf("\nEnter the inserted data ");
scanf("%d",&temp->data);
while(p->next!=NULL)
{
    p=p->next;
}
p->next=temp;
temp->next=(node *)NULL;
return(q);
}
//Insert after element 
node *insert_after(node *p)
{
    node *temp,*q;
    int x;
    q=p;
    printf("\nEnter the element(after which you have to enter data):");
    scanf("%d",&x);
    while(p->data!=x)
    {
        p=p->next;
    }
    temp=(node *)malloc(sizeof(node));
    printf("\nEnter the inserted data");
    scanf("%d",&temp->data);
    temp->next=p->next;
    p->next=temp;
    return(q);
}
//Count the no of nodes 
int count(node *p)
{
    int i=0;
    while(p!=NULL)
    {
        p=p->next;
        i++;
    }
    return (i);
}
//Insert at specific position 
node *insert_at_spe_pos(node *p)
{
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("\nEnter the position(at which you want to enter data ");
    scanf("%d",&x);
    if(x>(a+1))
    {
        printf("\nNot able to insert node at such position :");
        getch();
    }
    else
    {
        if(x==1)
        {
            temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data: ");
            scanf("%d",&temp->data);
            temp->next=p;
            q=temp;
        }
        else
        {
            while(i!=x)
            {
                r=p;
                p=p->next;
                i++;
            }
             temp=(node *)malloc(sizeof(node));
            printf("\nEnter the inserted data: ");
            scanf("%d",&temp->data);
            temp->next=p;
            r->next=temp;
        }
    }
    return (q);
}
//Delete last node 
node *delend(node *p)
{
    node *q,*r;
    r=p;
    q=p;
    if(p->next=NULL)
    {
        r=(node *)NULL;
    }
    else
    {
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
        }
        q->next=(node *)NULL;
    }
    free(p);
    return (r);
}
//Delete a specific element 
node *delete_at_spe_pos(node *p)
{
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("\nEnter the position(at which you want to remove data):");
    scanf("%d",&x);
    if(x>a)
    {
        printf("Not able to remove node at such position ");
        getch();
    }
    else
    {
        if(x==1)
        {
            q=q->next;
            free(p);
        }
        else
        {
            while(i!=x)
            {
                r=p;
                p=p->next;
                i++;
            }
            r->next=p->next;
            free(p);
        }
    }
    return (q);
}
