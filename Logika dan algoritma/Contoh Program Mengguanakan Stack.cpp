#include <stdio.h>
#include <stdlib.h> // menggunakan system (cls) "Menghapsu"
#include <conio.h> // Menggunakan getch() "Mengambil karakter"
#define MAX 10
 
 main()
 {
 	int i, top=-1, stack[MAX]; // var top adalah indeks
 	
	void push();	
	{
	if (top == MAX-1){ 							// jika indeks top benar sama dengan MAX -1
		printf("Stack Sudah Penuh ! \n"); 		// Cetak hasil
	}
	else{ 										// jika tidak benar indeks top sama dengan MAX - 1
		top++;									// indeks top bertambah 1
	
	printf("Masukkan Data : ");
	scanf("%d", &stack[top]);
	
	printf("\n Pada indeks ke : \n", top);
	printf(" Data %d telah di tambah !", stack[top]);
 }
 
}

	void pop();
{
	if (top == -1)
	{
		printf("Stack Kosong ! ");
	}
	else
	{
		printf("\nData %d pada indeks ke %d dalam stack diambil !", stack[top], top);
		stack[top--];
	}
		int clear();
	{
		return top = -1;
		
	}
}

	void Print();
	{
		if (top == -1)
		{
			printf("	stack : ");
			printf("\n======================");
			printf("	Empty !\n=======================");
		}
		else
		{
			printf("	Stack : ");
			printf("\n================");
		
	for ( i= top ; i>= 0; i--)
	{
		printf("XXXXX %d XXXXX", stack[i]);
	}
	printf(" =======================");
	}
}
}




