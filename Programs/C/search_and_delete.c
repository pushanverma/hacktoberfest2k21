#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nextptr;
};
struct node *head;
void createnodeList(int n);
void deleteitem(int n);
void displaynodeList();
int main()
{
    int n, i;
    printf("Enter the number of nodes you want to Enter : ");
    scanf("%d", &n);
    createnodeList(n);
    printf("Enter the number you want to delete : ");
    scanf("%d", &i);
    deleteitem(i);
    printf("Entered data is as follow : ");
    displaynodeList();
    printf("\n");
}
void createnodeList(int n)
{
    int i;
    struct node *tail, *middle;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        printf("Enter the data for node 1 : ");
        scanf("%d", &head->data);
        head->nextptr = NULL;
        tail = head;
        for (i = 2; i <= n; i++)
        {
            middle = (struct node *)malloc(sizeof(struct node));
            if (middle == NULL)
                printf("Memory cannot be allocated");
            else
            {
                printf("Enter the data for node %d : ", i);
                scanf("%d", &middle->data);
                middle->nextptr = NULL;
                tail->nextptr = middle;
                tail = tail->nextptr;
            }
        }
    }
}
void deleteitem(int n)
{
    struct node *tail,*previous;
    tail = head;
    while (tail->nextptr != NULL && tail->data == n)
    {
        tail = tail->nextptr;
        head = tail;
    }
    while(tail->nextptr != NULL){
        if(tail->data == n){
            previous->nextptr = previous->nextptr->nextptr;
            tail = tail->nextptr;
            continue;
        }
        previous = tail;
    tail = tail->nextptr;}
    tail=head;
    if(head->data == n){
    printf("All elements are deleted");
    exit(EXIT_SUCCESS);
    }
    else{
        while(tail->nextptr!=NULL){
        if(tail->nextptr->data==n){
            tail->nextptr = NULL;
            break;
        }
        tail = tail->nextptr;
     } }
}
void displaynodeList()
{
    struct node *tail;
    int i = 0;
    if (head == NULL)
        printf("List is Empty");
    else
    {
        tail = head;
        while (tail != NULL)
        {
            i++;
            printf("\n");
            printf("%d data : %d", i, tail->data);
            tail = tail->nextptr;
        }
    }
}


