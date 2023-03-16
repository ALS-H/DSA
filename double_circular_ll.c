//doubly circular  linked list
#include<stdio.h>
#include<stdlib.h>
//create a node
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{

/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
struct node *tail=NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data=2;
three->data=3;

/* Connect nodes */
one->next = two;
one->prev = head;

two->next = three;
two->prev = one;

three->next = tail;
three->prev = two;

//connecting head and tail
head->next= one;
tail->next=head;//we connect the head and tail
head->prev=tail;
tail->prev=three;

}