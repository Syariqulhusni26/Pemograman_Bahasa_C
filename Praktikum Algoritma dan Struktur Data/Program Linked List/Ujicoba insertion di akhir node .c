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
// fungsi untuk menambah node di akhir node
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
	
int main()
 {

	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;      
	
	struct node *ptr= malloc(sizeof(struct node)); // untuk mengalokasi node untuk nilai yang di sisipi
	ptr->data = 98;
	ptr->link =NULL;
	head->link = ptr;
	
	ptr = malloc(sizeof(struct node));
	ptr->data = 3;
	ptr->link = NULL;
	head->link->link = ptr;
	
	printf("Linked list sebelum di insert : \n");
	display(head);

	printf("\nLinked list sesudah di insert : \n");
	add_at_end(head, 67);
	display(head);
}
	
	
	
	
	
	
	
	