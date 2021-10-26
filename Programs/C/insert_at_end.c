#include <stdio.h>
#include <stdlib.h>

struct node  //code for making a node
{
    int data;
    struct node *next;
};

display(struct node *head)  //code for display nodes
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf ("display of node: ");
        printf("%d\n", head -> data);
        display(head->next);
    }
}

end(struct node *head,int value) // code for insertion at the end of singly linked list
{
    struct node *p,*q;
    p=malloc(sizeof(struct node));
    p->data=value;
    p->next=NULL;
    q=head;
    while(q->next!=NULL)
    {
        q = q->next;
    }
    q->next = p;
}
int main()
{
    struct node *prev,*head, *p;
    int n,i;
    printf ("Enter size of nodes: ");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
         printf ("Enter the elements: ");
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    end(head,20); // add 20 at the last node
    display(head);
    return 0;
}