#include <stdio.h>
#include <stdlib.h>
// linked list untuk menghapus node di akhir linked list
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
// fungsi untuk menghapus node di posisi tertentu
	void del_pos(struct node **head, int position)
	{
		struct node *current = *head;
		struct node *previous = *head;
		if(*head == NULL)
			printf("List is already empty!");
			else if(position == 1)
			{
				*head = current->link;
				current = NULL;
			}
			else
			{
				while(position != 1)
				{
					previous = current;
					current = current->link;
					position--;
				}
				previous->link = current->link;
				free(current);
				current = NULL;
			}
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
	int position = 2;
	del_pos(&head, position);
	display(head);
}
	
	
	
	
	
	
	
	