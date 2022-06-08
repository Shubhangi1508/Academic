#include<stdio.h>
#include<conio.h>
int MAXSIZE = 8;
int top= -1;
int stack[8];
void push(int m);
int pop();
void dec2bin(int num);
int main()
{
	int num,remainder;
	printf("Enter a number in Decimal Form: \n");
	scanf("%d",&num);
	dec2bin(num);
}
void push(int m)
{
    top++;
	stack[top]=m;
	printf("\nTop = %d and element present at Top is %d",top,stack[top]);
}
int pop()
{
	int j;
	j=stack[top];
	top--;
	return(j);
}
void dec2bin(int num)
{
	int remainder;
	while(num!=0)
	{
		remainder=num%2;
		push(remainder);
		num=num/2;
	}
	printf("\n\nBinary Equivalent is: \n");
	while(top!=-1)
	{
		printf("%d",pop());
	}printf("\n");
}




