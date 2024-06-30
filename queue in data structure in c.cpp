#include <stdio.h>
void enqueue(int);
void dequeue();
void display();

int queue[6],front =-1,rear =-1;
int main()
{
	enqueue(12);
	enqueue(13);
	enqueue(14);
	enqueue(15);
	enqueue(16);
	enqueue(17);
	display();
	
	dequeue();
	
	display();
}
void enqueue(int value)
{
	if(rear == 6-1)
	{
		printf("The queue is full");
	}
	else
	{
		if(front=-1)
			front=0;
		rear++;
		queue[rear] = value;
		printf("%d\n",value);
		printf("\n");
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("the queue id Empty");
		printf("\n");
	}
	else 
	{
		printf("%d\n",queue[front]);
		printf("\n");
		front++;
		if(front>rear)
		{
			front = rear = -1;
		}
	}
}
void display ()
{
	if(rear==-1)
	{
		printf("the queue is empty");
		printf("\n");
	}
	else 
	{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}

