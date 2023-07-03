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
// fungsi untuk mendelete node
	struct node* del_beg(struct node *head){
	if(head == NULL)
		printf("List ini kosong");
		else
		{
			struct node *temp = head;
			head = head->link;
			free(temp);
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
	
	printf("Linked list sebelum di delete : \n");
	display(head);

	printf("\nLinked list sesudah di delete : \n");
	head = del_beg(head);
	display(head);
}
	
	
	
	
	
	
	
	