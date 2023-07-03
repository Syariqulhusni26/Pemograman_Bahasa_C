#include <stdio.h>
#include <stdlib.h>

struct node {
	
	int data ;
	struct node *link;
	
};

void display(struct node *head){
	struct node *ptr = head;
	while(ptr != NULL)
	{
			printf("%d ", ptr->data);
			ptr = ptr->link;
	}	
}

struct node* add_beg(struct node* head, int d)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link = NULL;
	
	ptr->link = head;
	head = ptr;
	return head;
}

int main()
 {
 	
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;
	
	struct node *ptr= malloc(sizeof(struct node));
	ptr->data = 98;
	ptr->link = NULL;
	head->link = ptr;
	
	int data = 3;
	
	printf("Nilai node sebelum di insert : \n");
	display(head);
	
	printf("\nNilai node sesudah di insert : \n");
	head = add_beg(head, data);
	display(head);
	
}

