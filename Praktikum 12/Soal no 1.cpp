#include <stdio.h>
void menu();
main()

{
	int x, y;
	
	printf("Masukkan angka : ");
	scanf("%d", &y);
	
	for (x=1; x<y; x++)
	{
		menu();
	}
	
}

void menu()

{
	printf(" Pilihan menu\n");	
}

