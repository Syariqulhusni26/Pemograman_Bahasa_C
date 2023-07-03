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
	
	print(data);
	
}
