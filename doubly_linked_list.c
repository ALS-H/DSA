//doubly linked list
#include<stdio.h>
#include<stdlib.h>
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

/* Save address of first node in head */
head = one;

}