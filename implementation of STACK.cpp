#include<stdio.h>
#include<conio.h>
int ch, n, i, x, z;
int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

void push();
void pop();
void display();
int isfull();
int isempty();
main()
{
	int ch,n;
	int top= -1;
	while(1)
	{
	    printf("\n");
		printf("\n*********STACK OPERATIONS**********\n");
		printf(" 1) PUSH\n");
		printf(" 2) POP\n");
		printf(" 3) DISPLAY\n");
		printf(" 4) Exit\n");
		printf(" Enter your CHOICE: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\n======THANK YOU=======");
				return 0;
			default:
				printf("\nInvalid CHOICE:(");
				
		}
    }
}
void push()
{
	if(isfull() )
	{
		printf("STACK OVERFLOW\n");
	}
	else
	{
		printf("Enter the element to be pushed: ");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}printf("Top = %d and element present at Top is %d",top,stack[top]);
}
void pop()
{
	if(isempty())
	{
		printf("STACK UNDERFLOW\n");
	}
	else
	{
		printf("The element which is going to get popped is %d\n",stack[top]);
		top--;
	}printf("\nTop = %d and element present at Top is %d",top,stack[top]);
}
void display()
{
	if(top>=0)
	{
		printf("\nThe elements in STACK are:");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}printf("\nTop = %d and element present at Top is %d",top,stack[top]);
	}
	else
	{
		printf("The stack is empty\n");
	}
}
int isempty() 
{
   if(top == -1)
      return 1;
   else
      return 0;
}
int isfull() 
{
   if(top == MAXSIZE-1)
      return 1;
   else
      return 0;
}

