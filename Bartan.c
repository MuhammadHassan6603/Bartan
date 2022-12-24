#include<stdio.h>
#define SIZE 5
void main()
{
	int stack[SIZE];
	int top=-1;
	push(stack,&top,SIZE,10);
	push(stack,&top,SIZE,20);
	push(stack,&top,SIZE,30);
	push(stack,&top,SIZE,40);
	printf("%i\n",pop(stack,&top));
	printf("%i\n",pop(stack,&top));
	printf("%i\n",pop(stack,&top));
	printf("%i\n",pop(stack,&top));
}
void push(int *p,int *t,int s,int d)
{
	if(*t>=s-1)
	{
		printf("stack is Full");
		return;
	}
	*t=*t+1;
	*(p+*t)=d;
}
int pop(int *p,int *t)
{
	int d;
	if(*t==-1)
	{
		printf("Steck is Empty");
		return ;
	}
	d=*(p+*t);
	*t=*t-1;
	return d;
}
