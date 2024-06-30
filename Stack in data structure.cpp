#include <stdio.h>
int n=5;
int stack[5];
int top=-1;
int (isEmpty())
{
	if(top==-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int (isfull())
{
	if(top==5)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
int peek()
{
	return stack[top];
}

int (pop())
{
	int data;
	if(!isEmpty())
	{
		data = stack[top];
		top=top-1;
		return data;			
	}
	else 
	{
		printf("stack empty\n");
	}

}

int push(int data)
{
	if(!isfull())
	{
		top = top+1;
		//data = stack[data];
		stack[top]=data;
	}
	else 
	{
		printf("The stack is full\n");
	}
}

int main()
{
	
	push (34);
	push(12);
	push(43);
	push(23);
	push (54);
	
	peek();
	printf("\n");
	while (!isEmpty())
	{
		int data = pop();
		printf("%d ",data);
	}
	printf("stack full\n",isfull());
	printf("stack Empty\n",isEmpty());
	
	return 0;
}
