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
// fungsi untuk menambah node di akhir node

struct node* del_last(struct node *head)
{
	if(head == NULL)
	{
		free(head);
		head = NULL;
	}
	else	
	{
		struct node *temp = head;
		struct node *temp2 = head;
		while(temp->link != NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
	return head;
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
	head = del_last(head);
	display(head);
}
	
	
	
	
	
	
	
	