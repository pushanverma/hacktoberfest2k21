#include <stdio.h>
#include <stdlib.h>
struct node			//initialization of node in the singly linked list
{
  int data;
  struct node *next;
};
struct node *head;

void print ()
{

  printf ("\nList: ");
  while (head != NULL)
    {
      printf ("\n%d ", head->data);
      head = head->next;
    }
}

void begin_insert (int element)	//code for inserting node at the starting of the singly linked list
{
  struct node *ptr = (struct node *) malloc (sizeof (struct node *));
  if (ptr == NULL)
    {
      printf ("EXIT\n");
    }
  else
    {
      ptr->data = element;
      ptr->next = head;
      head = ptr;
      printf ("Node inserted\n");	//node inserted by this printf function
    }
}

void main ()
{
  int input, element;
  do
    {
      printf ("Enter the element to insert?\n");	//taking input from the user
      scanf ("%d", &element);
      begin_insert (element);
      printf ("Press 1 to insert more element otherwise Press 0\n");	//taking input from the user to insert more node
      scanf ("%d", &input);
    }
  while (input == 1);
  print ();
}