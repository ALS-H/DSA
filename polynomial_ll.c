//to evaluate a polynomial 4x^3+3x-2 using linked list
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node {
    int value;
    struct node *next;
};

int main()
{

/* Initialize nodes */
struct node *head;
int x,result;
struct node *term1 = NULL;
struct node *term2 = NULL;
struct node *term3 = NULL;
struct node *tail=NULL;

printf("enter a value for x:");
scanf("%d\n",&x);

/* Allocate memory */
term1= malloc(sizeof(struct node));
term2 = malloc(sizeof(struct node));
term3 = malloc(sizeof(struct node));

/* Assign x values */
term1->value=4*pow(x,3);
term2->value=3*x;
term3->value=2;

/* Connect nodes */
term1->next = term2;

term2->next = term3;

term3->next = tail;

result=term1->value+term2->value-term3->value;

/* Save address of first node in head */
head = term1;
printf("the value of the polynomial is=%d",result);

}