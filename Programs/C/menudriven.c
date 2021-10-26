#include<stdio.h>
#include<stdlib.h>

struct node* addofll(struct node*);  //prototype of the new linked list block creation
void display(struct node*);   // prototype to display the elements in the linked list
void search(struct node*);   //prototype for searching to check if the element is in the list
struct node* insert(struct node*); //prototype for inserting a node into the linked list
struct node* delete(struct node*); //prototype for deletion of a node from the linked list

/*creating the struct for the block of linked list*/

struct node  //struct node is required for linked list so as to get data and address
{
int data;
struct node* ptr; // struct node type pointer is required so as to hold the pointer of other struct node type for linking
};

int main()
{

 struct node* head; //this pointer holds on the starting value of the data
 int i,b;  
 head=NULL;

 while(1)
 {
  printf("\nwhat do you want to do now?\nPress \n1-> to proceed for element processing \n2-> to display the elements \n3-> to search any element in the list \n4->Insert a node into linked list\n5->Delete the node from linked list\n");
  scanf("%d",&b);

 switch(b)
  {
  case 1: head=addofll(head);
  break;

  case 2: display(head);
  break;

  case 3: search(head);
  break;

  case 4: head=insert(head);
  break;

  case 5: head=delete(head);
  break;

  default: printf("You have entered an invalid option");
  }
 } 
 return 0;
}

void search(struct node*head)
{

 int ele;
 printf("Enter the element to be searched \n");
 scanf("%d",&ele);
 
 if(head!=NULL)
 {  
  while (head!=NULL)
  {
  if(head->data==ele)
   {  
    printf("\nthe element %d is found in the data\n",ele);
    head=head->ptr;
   }
  
  else
   {
    while(head != NULL && head->data != ele)
    {
    head=head->ptr;
    
    } 
   }
 
  } 
 
   printf("\nThe search didnt find any element later\n");
 } 
 else
  printf("\nThere are no elements in the list\nPlease insert a new node\n");

}

void display(struct node* head)
{
 printf("the data is displayed below\n");
 while(head !=NULL)
  {
  printf("\n%d \t",head->data);
  head=head->ptr;
  }
}


struct node* addofll(struct node* head)
{
 int dat;
 printf("Enter data \n");
 scanf("%d",&dat);
 struct node* newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=dat;
 newnode->ptr=NULL;

 newnode->ptr=head;
 return newnode;

}



struct node* insert(struct node* head)
{
 int info,num;
 struct node* newnode;
 struct node* temp;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the value to be inserted\n");
 scanf("%d",&info);

 newnode->data=info;

 printf("\nPoint out the location of insertion in terms of data of linked list\n");
 scanf("%d",&num);

 temp=head;

 if(temp == NULL)
  {
  printf("\nThe list is empty\nThe new node is the first node\n");
  newnode->ptr=NULL;
  return newnode;
  }


 while(temp !=NULL && temp->data !=num)
  temp=temp->ptr;


 if(temp !=NULL && temp->data ==num)
  {
  printf("\nyou have found the location of the insertion: inserting %d in list\n",info);
  newnode->ptr=temp->ptr; 
  temp->ptr=newnode;
  }

 printf("\nyou are out of the loop\n");

 return head;


}


struct node* delete(struct node* head)
{
 struct node *temp,*del;
 int num;
 printf("\nEnter the lisked list data element to be removed\n");
 scanf("%d",&num); 
 temp=head;
 
 if(temp !=NULL && temp->data == num)
  {
  printf("\nThe value is detected and this node is getting deleted\n");
  head=temp->ptr;
  free(temp);
  return head;
  }
 if(temp !=NULL && temp->ptr->data ==num)
  {
  del=temp->ptr;
  temp->ptr=temp->ptr->ptr;
  free(del);
  return head;
  }
 while(temp !=NULL && temp-> data != num)
   {
  if(temp !=NULL && temp->data !=num) {
  temp=temp->ptr;
  }
  else
  return head;
  }
 if(temp == NULL)
  {
   printf("\nThere are no elements in the list\nCreate a new node first\n");
   return 0; 
 }
  
 
}