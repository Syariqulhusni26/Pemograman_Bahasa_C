#include <stdio.h>
#define MAX 5

int stack_arr[MAX];
top = -1;

void push(int data)
{
	
	if(top == MAX - 1) {
		printf("stack overflow");
		return; // indicatet the end of the function
	}
	top = top + 1;
	stack_arr[top] = data;
}

void pop()
{
	int value;
	if(top == -1)
	{
		printf("Stack underflow");
		exit(1);
	}
	value = stack_arr[top];
	top = top - 1;
	return value;
}
void print()
{
	int i;
	if(top == -1)
	{
		printf("Stack Underflow\n");
		return;
	}
	for(i=top; i>=0; i--){
		printf("%d ", stack_arr[i]);
		printf("\n");
	}
}

int main()
{
	int data;
	push(10);
	push(20);
	push(30);
	push(40);
	
	printf("Nilai sebelum di pop : \n");
	print(data);
	
	printf("Nilai sesudah di pop : \n");
	pop();
	print(data);
	
	
}
