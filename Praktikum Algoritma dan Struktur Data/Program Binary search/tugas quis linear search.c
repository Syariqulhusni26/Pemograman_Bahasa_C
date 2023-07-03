#include <stdio.h>

int main()
{
	int array[] = {40, 60, 50, 10, 20};
	int search, sisip;
	int a = 0, b;
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Nilai [%d]: %d \n", i, array[i]);
	}
	printf("Masukkan nilai yang dicari : ");
	scanf("%d", &search);
	for(i=0; i<5; i++)
	{
		if(array[i] == search)
		{
			printf("Nilai yang anda cari berada di index: [%d]\n", i);
			break;
		}
	}
	
	if(array[i]!= search)
	{
		printf("Maaf data tidak ditemukan");
	}
	
	//program menyisipkan angka
	printf("Masukkan nilai yang ingin disisip : ");
	scanf("%d", &sisip);
	for (b=3; b>=2; b--)
	{
		array[b+1] = array[b];
	}
	
	array[2] = sisip;
	
	printf("\n");
	
	
	//program menampilkan array
	for(i=0; i<6; i++)
	{
		printf("Nilai [%d]: %d \n", i, array[i]);
	}
	
	printf("Masukkan nilai yang dicari : ");
	scanf("%d", &search);
	for(i=0; i<5; i++)
	{
		if(array[i] == search)
		{
			printf("Nilai yang anda cari berada di index: [%d]", i);
			break;
		}
	}
	
	if(array[i]!= search)
	{
		printf("Maaf data tidak ditemukan");
	}
	
}
