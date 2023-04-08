// C program for the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

// Defining Structure
typedef struct mynode {
	char name[20];
	char gen[6];
	int age;
	struct mynode* link;
} Node;

Node* start = NULL;

void details(int);
void seat(int);
int cal(int, int, int);
void bill(int, int);
void sortList();
/*void sortList2();*/
void display();

// Global variables
char source[20], des[20], plane[40];
char station[40],cla[40];
int time1, time2, a[55],eco_bus;
int bus[11],eco[61];
clock_t t1,t2,t3,t4,t5,t6,t7;

// Driver Code
int main()
{
	int i, j, a1, a2, b;int x = 0, d, e, r;
	char o;
	printf("Enter Number Of Passengers: ");
	fflush(stdin);
	scanf("%d", &j);

    t1= clock();
	details(j);
    t1 = clock() - t1;
    double time_taken1= ((double)t1)/CLOCKS_PER_SEC; // in seconds
    printf("details() took %f seconds to execute \n", time_taken1);


	printf("Enter The Source Place: ");
	fflush(stdin);
	gets(source);
	printf("Enter The Destination Place: ");
	gets(des);
	while(1)
	{
		printf("\t\tThe Following Airlines "
		"Are Available.....\n");
		printf("\t\t1.Air India.."
			".......10:00 pm \n");
		printf("\t\t2.Air Asia..."
			".......05:00 pm\n");
		printf("\t\t3.Indigo..."
			".......11:00 pm\n");
		printf("\t\t4.SpiceJet"
			".........05:00 pm\n");
		printf("\t\t5.Vistara..."
			".........07:00 pm\n");
		scanf("%d", &i);
		if(i < 1 || i > 5)
		{
			printf("enter a valid number! \n");
			continue;
		}
		else
		{
			if(i == 1)
			{
				strcpy(plane,
				"Air India");
				time1 = 10;
				time2 = 00;
				a1 = 2099;
				a2 = 1560;

				// Calling cal() function
				// with the three argument
				// and return value
				d = cal(a1, a2, j);
				printf("Total Bill Amount:"
					" %d\n",
					d);
			}
			else if(i == 2)
			{
				strcpy(plane,
				"Air Asia");
				time1 = 05;
				time2 = 00;
				a1 = 1801;
				a2 = 981;

				// Calling cal() function with
				// three argument & return value
				t3= clock();
                d = cal(a1, a2, j);
                t3 = clock() - t3;
                double time_taken3= ((double)t3)/CLOCKS_PER_SEC; // in seconds
                printf("cal() took %f seconds to execute \n", time_taken3);
				printf("Total Bill Amount: %d\n", d);
			}
			else if(i == 3)
			{
				strcpy(plane,
				"Indigo");
				time1 = 11;
				time2 = 00;
				a1 = 2199;
				a2 = 1780;

				// Calling cal() function with
				// three argument & return value
				t2= clock();
                d = cal(a1, a2, j);
                t2 = clock() - t2;
                double time_taken2= ((double)t2)/CLOCKS_PER_SEC; // in seconds
                printf("cal() took %f seconds to execute \n", time_taken2);
				printf("Total Bill Amount:"
					"%d\n",
					d);
			}
			else if(i == 4)
			{
				strcpy(plane, "SpiceJet");
				time1 = 05;
				time2 = 00;
				a1 = 1759;
				a2 = 1200;

				// Calling cal() function with
				// three argument & return value
				t4= clock();
                d = cal(a1, a2, j);
                t4 = clock() - t4;
                double time_taken4= ((double)t4)/CLOCKS_PER_SEC; // in seconds
                printf("cal() took %f seconds to execute \n", time_taken4);
				printf("Total Bill Amount: %d\n", d);
			}
			else
			{
				strcpy(plane, "SpiceJet");
				time1 = 05;
				time2 = 00;
				a1 = 1759;
				a2 = 1200;

				// Calling cal() function with
				// three argument & return value
				t5= clock();
                d = cal(a1, a2, j);
                t5 = clock() - t5;
                double time_taken5= ((double)t5)/CLOCKS_PER_SEC; // in seconds
                printf("cal() took %f seconds to execute \n", time_taken5);
				printf("Total Bill Amount: %d\n", d);
			}
			break;
		}
	}
	printf("Now Book Your Seats......\n");

	// Calling seat() function with number
	// of passenger
	t6= clock();
    seat(j);
    t6 = clock() - t6;
    double time_taken6 = ((double)t6)/CLOCKS_PER_SEC; // in seconds
    printf("seat() took %f seconds to execute \n", time_taken6);


	// Calling bill() function with
	// the number of passenger
	// and amount argument
	t7 = clock();
    bill(d, j);
    t7 = clock() - t7;
    double time_taken7 = ((double)t7)/CLOCKS_PER_SEC; // in seconds
    printf("bill() took %f seconds to execute \n", time_taken7);


	printf(" Sorted:- ");
	sortList();
	display();
}

// Function for calculation of amount
int cal(int y1, int y2, int h)
{
	int b, c, i, t, r, n;
    while(1){
        printf("\t\tEnter Your Choice......\n");
        printf("\t\t1. Business Class....\n");
        printf("\t\t2. Economic Class.......\n");
        scanf("%d", &i);
        if(i == 1){
            eco_bus = 1;
            b = (y2+500)* h;
            c = b + (b * 0.18);
            break;
        }
        else if(i == 2){
            eco_bus = 2;
            b = (y2+1000)* h;
            c = b + (b * 0.18);
            break;
        }
        else{
            printf("enter valid choice \n");
            continue;
        }
	}
    return c;
}

// Function to add details in node
// for each passengers
void add_node(char lol[20], char der[6], int b)
{
	Node *newptr = NULL, *ptr;
	newptr = (Node*)malloc(sizeof(Node));
	strcpy(newptr->name, lol);
	strcpy(newptr->gen, der);
	newptr->age = b;
	newptr->link = NULL;
	if (start == NULL)
		start = newptr;
	else {
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}

// Function for taking details
// of passengers
void details(int k)
{
	int i, a;
	char val[20], gen[6];
	for (i = 1; i <= k; i++) {
		printf("Enter The %dth Passenger Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %dth Passenger Gender: ", i);
		fflush(stdin);
		gets(gen);
		printf("Enter The %dth Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);

		// Calling add_node() function
		add_node(val, gen, a);
	}
}


// Function for choosing seats
void seat(int p)
{
	int i;
	if(eco_bus == 1){
	printf("\t		 -:SEAT MATRIX:-	 \n");
	printf("\t(W)(M)(I)\t (I)(W)\n\n");
	printf("\t....BUSINESS CLASS........\n");
	printf("\t01 02  03\t  04 05\n");
	printf("\t06 07	 08\t  09 10\n\n\n");}
	else{
	printf("\t....ECONOMIC CLASS........\n");
	printf("\t11  12 13\t  14 15\n");
	printf("\t16  17 18\t  19 20\n");
	printf("\t21  22 23\t  24 25\n");
	printf("\t26  27 28\t  29 30\n");
	printf("\t31  32 33\t  34 35\n");
	printf("\t36  37 38\t  39 40\n");
	printf("\t41  42 43\t  44 45\n");
	printf("\t46  47 48\t  49 50\n");
	printf("\t51  52 53\t  54 55\n");
	printf("\t56  57 58\t  59 60\n");}
	printf("\tEnter Seat Numbers: \n");
    int indice = 0;
    for(int i = 0; i < 11; ++i)
	{
		eco[i] = 0;
	}
	for(int i = 0; i < 61; ++i)
	{
		bus[i] = 0;
	}
	while(1)
    {
        if(p == 0) break;
        int x;
        scanf("%d",&x);
        if(eco_bus == 1 && (x >= 1 && x <= 10))
        {
			if(bus[x] == 1)
			{
				printf("seat is booked, please enter again\n");
				continue;
			}
			else
			{
				bus[x] = 1;
			}
            --p;
            a[indice] = x;
            ++indice;
        }
        else if(eco_bus == 2 && (x >= 11 && x <= 60))
        {
			if(eco[x] == 1)
			{
				printf("seat is booked, please enter again\n");
				continue;
			}
			else
			{
				eco[x] = 1;
			}
            --p;
            a[indice] = x;
            ++indice;
        }
        else
        {
            printf("invalid input \n enter again \n");
        }
    }
}

// Function for printing receipt
void bill(int y, int j)
{
	int i;
	Node* ptr = start;
	for (i = 1; i <= j; i++) {
		printf("\t\t%dst Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%dst Passenger Gender: ", i);
		puts(ptr->gen);
		printf("\t\t%dst Passenger Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
	}
	printf("\t\tSource Place: ");
	puts(source);
	printf("\t\tDestination Place: ");
	puts(des);
	//printf("\t\tThe Boarding Airport: ");
	//puts(station);
	printf("\t\tPlane Is: ");
	puts(plane);
	printf("\t\tAllocated Class: ");
	if(eco_bus == 1) printf("Business Class");
    else printf("Economic Class");
	printf("\t\tBoarding Time: %d:%d\n", time1, time2);
	printf("\t\tTotal Bill Amount: %d\n", y);
	printf("\t\tAllocated Seats Are: \n");
	for (i = 0; i < j; i++) {
		printf("\t\t%d ", a[i]);
	}
	printf("\n");
	printf("\t\t\t\tThank You......\n");
}


void sortList() {
        //Node current will point to head
        struct mynode *current = start;
        struct mynode *index = NULL;
        int temp1;
        char temp2[20];

        if(start == NULL) {
            return;
        }
        else {
            while(current != NULL) {
                //Node index will point to node next to current
                index = current->link;

                while(index != NULL) {
                    //If current node's data is greater than index's node data, swap the data between them
                    if(current->age > index->age) {
                        temp1 = current->age;
                        current->age = index->age;
                        index->age = temp1;
                        strcpy(temp2,current->name);
                        strcpy(current->name,index->name);
                        strcpy(index->name,temp2);
                    }
                    index = index->link;
                }
                current = current->link;
            }
        }
    }
/*void sortList2() {
        //Node current will point to head
        struct mynode *current = start;
        struct mynode *index = NULL;
        int temp;

        if(start == NULL) {
            return;
        }
        else {
            while(current != NULL) {
                //Node index will point to node next to current
                index = current->link;

                while(index != NULL) {
                    //If current node's data is greater than index's node data, swap the data between them
                    if(current->name > index->name) {
                        temp = current->name;
                        current->name = index->name;
                        index->name = temp;
                    }
                    index = index->link;
                }
                current = current->link;
            }
        }
    }
*/
void display() {
    //Node current will point to head
    struct mynode *current = start;
    if(start == NULL) {
        printf("List is empty \n");
        return;
    }
    while(current != NULL) {
        //Prints each node by incrementing pointer
        printf("%d\t ", current->age);
        puts(current->name);
        printf("\n");
        current = current->link;
    }
    printf("\n");
}
