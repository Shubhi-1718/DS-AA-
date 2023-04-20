// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
typedef struct dllk
{
    struct dllk *prev;
    int info;
    struct dllk *next;
}node;
void createnode(node **head,node **tail)
{
    *head=*tail=NULL;
}
void insertatbegin(node **head, node **tail,int val)
{
    node *ptr=(node*)malloc(sizeof(node));
    ptr->info=val;
    if(*head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        *head=*tail=ptr;
    }
    else
    {
        ptr->prev=NULL;
        ptr->next=*head;
        (*head)->prev=ptr;
        *head=ptr;
    }
}
void insertatend(node **head,node **tail, int val)
{
    node *ptr=(node*)malloc(sizeof(node));
    ptr->info=val;
    if(*head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        *head=*tail=ptr;
    }
    else
    {
        ptr->next=NULL;
        ptr->prev=*tail;
        (*tail)->next=ptr;
        *tail=ptr;
    }
}
void traverseinorder(node *head)
{
    while(head!=NULL)
    {
        printf("\n%d",head->info);
        head=head->next;
    }
}
void traverseinreverseorder(node *tail)
{
    while(tail!=NULL)
    {
        printf("\n%d",tail->info);
        tail=tail->prev;
    }
}

int main() 
{
    int num,a;
    node *head,*tail;      
    createnode(&head,&tail);
    while(1)
    {
    printf("\nOptions are\n");
    printf("\n1. Insert at beginning");
    printf("\n2. Insert at end");
    printf("\n3. Traverse in Order");
    printf("\n4. Traverse in Reverse");
    printf("\n5. End");
    printf("\nEnter your choice");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("\nEnter element");
                scanf("%d",&a);
                insertatbegin(&head,&tail,a);
                break;
        case 2: printf("\nEnter element");
                scanf("%d",&a);
                insertatend(&head,&tail,a);
                break;
        case 3: if(head==NULL)
                printf("\nList is empty");
                else
                traverseinorder(head);
               
                break;
        case 4: if(head==NULL)
                printf("\nList is empty");
                else
                traverseinreverseorder(tail);
                
                break;
        case 5: exit(0);
    }
    
        
    }
    return 0;
}
