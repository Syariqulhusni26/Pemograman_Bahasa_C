  #include <stdio.h>
#include <stdlib.h>

struct node {
	
	int data ;
	struct node *link;
	
};
//fungsi menampilkan node
void display(struct node *head){
	struct node *ptr = head;
	while(ptr != NULL)
	{
			printf("%d ", ptr->data);
			ptr = ptr->link;
	}	
}
// fungsi untuk mendelete node di awal linked list
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
	
	struct node *current= malloc(sizeof(struct node));
	current->data = 98;
	current->link =NULL ;
	head->link = current;

	current = malloc(sizeof(struct node));
	current ->data = 48;
	current ->link = NULL;
	head->link->link = current;
	
	current = malloc(sizeof(struct node));
	current->data = 3;
	current->link = NULL;
	head->link->link->link = current;
	
	printf("Nilai node sebelum di delete : \n");
	display(head);
	
	printf("\nNilai node sebelum di delete : \n");
	head = del_beg(head);
	display(head);
	
}


