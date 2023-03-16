//singly linked list
//to insert a new data=5 node name six between two and three
#include<stdio.h>
#include<stdlib.h>
int PrintLinkedList();
struct node {
    int data;
    struct node *next;
    struct node *in_btw;
};

int main()
{

/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
struct node *six = NULL;
struct node *tail=NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));
six = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data=2;
three->data=3;
six->data=5;

struct node *in_btw=six;

/* Connect nodes */
one->next = two;

two->next = six;
six->next=three;

three->next = tail;

/* Save address of first node in head */
head = one;
tail=NULL;
//to print a node
printf("%d\n",one->data);
printf("%d\n",two->next);//this address is same as six
printf("%d\n",six);//this address is same as two->next
printf("%d\n",one->data+two->data+three->data);

}