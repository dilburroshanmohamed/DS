#include<stdio.h> //include header
#include<stdlib.h>
#define SIZE 10
int front = -1,arr[SIZE];
int rear = -1,arr[SIZE];
// function declaration 
void enqueue();

void dequeue();

void traversal();

int main() // main function - landing function
{
   	int choice;
	do
	{
		printf("\n 1.enqueue \n 2.dequeue \n 3.traversal \n 4.Exit \n");
		printf("\n \n please select your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue(); //function calling	
				break;
			case 2:
				dequeue();
				break;
			case 3:
				traversal();
				break;
			case 4:
				break;
			default:
				printf("invalid choice..,");
				break;
		}
	}while(choice != 4);
	return(0);
}
//function definition

void enqueue()
{
    int n;
    if ((rear + 1) % SIZE == front)
    {
        printf("\n Queue full");
    }
    else
    {
        printf("\n Add your element: ");
        scanf("%d",&n);
        if(front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = n;
    }
}


void dequeue()

{
	if (front == -1)

	{

		printf("\n under flow");

	}

	else if (rear==front)

	{

		printf("\n deleted element : %d",arr[front]);
		front=-1;
		rear=-1;

	}

	else

	{

		printf("\n deleted element : %d",arr[front]);
		front = (front + 1) % SIZE;
	}
}



void traversal()
{
    int i;
    if (front == -1)
    {
        printf("\n Underflow");
    }
    else if (front <= rear)
    {
        printf("\n Elements in the Queue: ");
        for(i = front; i <= rear; i++)
            printf("%d,", arr[i]);
    }
    else
    {
        printf("\n Elements in the Queue: ");
        for(i = front; i < SIZE; i++)
            printf("%d,", arr[i]);
        for(i = 0; i <= rear; i++)
            printf("%d,", arr[i]);
    }
}
