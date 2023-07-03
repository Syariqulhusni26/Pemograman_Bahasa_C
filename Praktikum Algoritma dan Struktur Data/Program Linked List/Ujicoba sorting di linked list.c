#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* addToEmpty(int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = temp;
    return temp;
}

struct node* addatend(struct node* head, int data)
{
    struct node* newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->link = NULL;

    if (head == NULL) {
        newP->link = newP;
        return newP;
    }

    struct node* temp = head;
    while (temp->link != head)
        temp = temp->link;
    temp->link = newP;
    newP->link = head;
    return head;
}

struct node* insert(struct node* head, int data)
{
    struct node* temp;
    struct node* newP = malloc(sizeof(struct node));
    newP->data = data;
    newP->link = NULL;

    int key = data;
    if (head == NULL || key < head->data) {
        newP->link = head;
        head = newP;
    }
    else {
        temp = head;
        while (temp->link != NULL && temp->link->data < key)
            temp = temp->link;
        newP->link = temp->link;
        temp->link = newP;
    }
    return head;
}

void print(struct node* head)
{
    struct node* temp = head;
    if (head != NULL) {
        do {
            printf("%d ", temp->data);
            temp = temp->link;
        } while (temp != head);
    }
    printf("\n");
}

int main()
{
    struct node* head = NULL;
    head = addToEmpty(24);
    head = addatend(head, 45);
    head = addatend(head, 56);
    head = addatend(head, 100);
    head = insert(head, 75);
    print(head);
    return 0;
}
