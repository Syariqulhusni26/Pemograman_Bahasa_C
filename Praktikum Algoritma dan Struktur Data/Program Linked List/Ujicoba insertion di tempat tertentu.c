#include <stdio.h>
#include <stdlib.h>
//linked list untuk menambah node di tempat tertentu
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
	void add_at_end(struct node *head, int data)
{
	struct node *ptr , *temp;
	ptr = head;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;
	
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}

// fungsi untuk menambah node di tempat tertentu
	void add_at_pos(struct node* head, int data, int pos){
	struct node *ptr = head;
	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2->data = data;
	ptr2->link = NULL;
	
	pos--;
	while(pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;
	}
	
int main()
 {

	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;      
	
	add_at_end(head, 98);
	add_at_end(head, 3);
	
	printf("Linked list sebelum di insert : \n");
	display(head);
	
	printf("\nLinked list sesudah di insert : \n");
	int data = 67;
	int position = 4;
	add_at_pos(head, data, position);
	display(head);
	
	return 0;
}
	
	