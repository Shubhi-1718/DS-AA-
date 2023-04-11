#include<stdio.h>
#include<process.h>
#include<alloc.h>
#include<conio.h>
//Declaration of Structure
typedef struct simplelink 
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
//delete specific element 
node *del_speci_ele(node *p)
{
    node *q,*r;
    int x;
    q=p;
    r=q;
    printf("\nEnter the data to remove ");
    scanf("%d",&x);
    while(q->data!=x)
    {
        r=q;
        q=q->next;
    }
    if(q==r)
    p=p->next;
    else
    r->next=q-next;
    free(q);
    return (p);
}
//Delete a specific position 
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
//delete first node 
node *delbegin(node *p)
{
    node *q;
    q=p;
    p=p->next;
    free(q);
    return p;
}
//delete node after element
node *delete_after(node *p)
{
    node *temp,*q;
    int x;
    q=p;
    printf("\nEnter the data(after which you want to delete ");
    scanf("%d",&x);
    while(p->data!=x)
    {
        p-p->next;
    }
    temp=p->next;
    p->next=temp->next;
    free(temp);
    return(q);
}
//Reverse the list 
node *reverse(node *p)
{
    node *q,*r;
    q=(node *)NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
        
    }
    return (q);
}
//Main Screen 
void screen(node *head)
{
    clrscr();
    int ch,a;
    printf("\t\t\t\t\t\t SINGLE LINEAR LINKED LIST");
    printf("\n\t\t\t\t\t**************************");
    printf("\n\nOPTIONS ARE--:");
    printf("\n~~~~~~~~~~~~~~~~");
    printf("\n\n 0-Exit");
    printf("\n 1-Create first node");
    printf("\n 2-Insert at beginnig");
    printf("\n 3-Insert at end");
    printf("\n 5-Insert at specific postion");
    printf("\n 6-Delete at end ");
    printf("\n 7-Delete at beginnig");
    printf("\n 8-Delete after element ");
    printf("\n 9-Delete a specific element");
    printf("\n 10-Delete at specific postion ");
    printf("\n 11- Traverse in order (Display)");
    printf("\n 12- Traverse in reverse order (Display)");
    printf("\n 13- Count no. of node ");
    printf("\n 14- Reversed linked list ");
    printf("\n---------------------------------------------------");
    printf("\n\nEnter your choice ");
    scanf("%d",&ch);
    printf("\n---------------------------------------------------");
    switch(ch)
    {
        case 0: exit(0);
        case 1: head=create(head);
                break;
        case 2: head=insert_begin(head);
                break;
        case 3: head=insert_end(head);
                break;
        case 4: head=insert_after(head);
                break;
        case 5: head=insert_at_spe_pos(head);
                break;
        case 6: head=delend(head);
                break;
        case 7: head=delbegin(head);
                break;
        case 8: head=delete_after(head);
                break;
        case 9: head=del_speci_ele(head);
                break;
        case 10: head=delete_at_spe_pos(head);
                break;
        case 11: display(head);
                break;
        case 12: revdisplay(head);
                break;
        case 13: a=count(head);
                printf("The no of nodes in list %d",a);
                printf("\n\n\nPress any key to continue.....");
                getch();
                break;
        case 14: head=reverse(head);
                break;
        default: printf("\n\n\nPlease enter the right choice.....");
                    getch();
                    break;
    
    }
    screen(head);
}
//declartion of Main
void main()
{
    clrscr();
    node *head;
    head= (node *)NULL;
    screen(head);
    getche();
}
