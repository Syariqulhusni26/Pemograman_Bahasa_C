#include <stdio.h>
int search_linear (int);
int tampilkan_nilai (int);
main()
{
	int a;
	tampilkan_nilai(a);
	search_linear (a);		
}
int search_linear (int x)
{
	int Array[] ={98,74,39,33,44,85,93,11,23,54};
	int search;
	int a=0, b = 10;
	
	printf("Masukkan nilai yang ingin di cari indeksnya : ");
	scanf("%d", &search);
	for(a=0; a<b; a++)
	{
		if(Array[a] == search)
		{
			printf("Nilai yang anda cari berada di indeks = %d",a);
			printf("\nTerima kasih ");
			break;
		}
	}
}
int tampilkan_nilai(int x)
{
	int Array[] ={98,74,39,33,44,85,93,11,23,54};
	int a=0, b = 10;
	
	for(a=0; a<b;a++)
	{
		printf("Array[%d] = %d\n", a, Array[a]);
	}
}
