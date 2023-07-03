#include <stdio.h>
#include <stdlib.h>

struct node {
	
	int data ;
	struct node *link;
	
};

int main()
 {
 	
	struct node *head=malloc(sizeof(struct node));
	printf("Masukkan data untuk node 1 : ");
 	scanf("%d", &head->data);
	head->link = NULL;      
	
	struct node *current= malloc(sizeof(struct node));
	printf("Masukkan data untuk node 2 : ");
 	scanf("%d", &current->data);
	current->link = NULL ;
	head->link = current;
	
	current= malloc(sizeof(struct node));
	printf("Masukkan data untuk node 3 : ");
 	scanf("%d", &current->data);
	current->link = NULL ;
	head->link->link = current;
	
	current = head;
	while(current!=NULL) {
		printf("%d ", &current->data);
		current = current->link;
	}
	
}