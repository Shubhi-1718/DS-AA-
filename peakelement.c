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
int main() 
{
    int num;
  node *head,*tail;      
    createnode(&head,&tail);
    insertatbegin(&head,&tail,5);
    insertatbegin(&head,&tail,10);
    insertatbegin(&head,&tail,3);
    insertatbegin(&head,&tail,2);
    node *loc,*ploc,*nloc;
    loc=head->next;
    while(loc!=NULL)
    {
        ploc=loc->prev;
        nloc=loc->next;
        if((ploc->info<loc->info)&&(nloc->info<loc->info))
        {
            num=loc->info;
            break;
        }
        else
        loc=loc->next;
    }
    printf("\nPeak element is %d",num);
    return 0;
}
