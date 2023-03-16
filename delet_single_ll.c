//to delete in a singly linked list
//to delete node two
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
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

two->next = three;

three->next = tail;

//deleting two, connecting one and three node
one->next=three;
two->next=NULL;

//connecting head and one
head = one;


}