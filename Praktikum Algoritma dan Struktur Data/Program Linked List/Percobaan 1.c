#include <stdio.h>
#include <stdlib.h>

// Definisi struktur node
struct Node {
    int data;
    struct Node* next;
};

// Fungsi untuk mencari elemen dalam linked list
struct Node* search(struct Node* head, int key) {
    struct Node* current = head;

    // Melakukan iterasi pada linked list
    while (current != NULL) {
        // Jika elemen ditemukan, mengembalikan pointer ke node tersebut
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }

    // Jika elemen tidak ditemukan, mengembalikan NULL
    return NULL;
}

// Fungsi untuk menambahkan elemen baru ke linked list
void insert(struct Node** head, int data) {
    // Membuat node baru
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // Jika linked list kosong, node baru akan menjadi head
    if (*head == NULL) {
        *head = newNode;
    } else {
        // Menambahkan node baru ke akhir linked list
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Fungsi untuk mencetak linked list
void printList(struct Node* head) {
    struct Node* current = head;

    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Menambahkan elemen ke linked list
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    insert(&head, 50);

    // Mencetak linked list
    printList(head);

    // Mencari elemen dalam linked list
    int key = 30;
    struct Node* result = search(head, key);

    // Menampilkan hasil pencarian
    if (result != NULL) {
        printf("Elemen %d ditemukan dalam linked list.\n", key);
    } else {
        printf("Elemen %d tidak ditemukan dalam linked list.\n", key);
    }

    return 0;
}
