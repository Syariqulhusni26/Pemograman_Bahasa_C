#include <stdio.h>

main()
{
	int Array[] = {44,42,35,33,31,27,26,19,14,10};
	int elemen = 10;
	int search = 44;
	int a, k, indeks_Aw = 0, indeks_Ak = 9, benar;
	
	// Menampilkan elemen Array
	puts("Elemen array");
	for(a=0; a<elemen; a++)
	{
		printf("%d ", Array[a])	;
	} 
	printf("\nNilai yang mau dicari = %d ", search);
	// perulangan untuk membandingkan array dengan nilai yang di cari
	for(a=0; a<elemen; a++)
	{
		k = (indeks_Aw + indeks_Ak) /2;
		if (Array[k] == search)
		{
		benar = k;
		printf("berada pada indeks %d\n", benar);
		break;
		}
		// fungsi if untuk memutuskan array  yang di cari lebih besar atau sebaliknya
		if(Array[k] > search)
		{
			indeks_Aw = k+1;
		}
		else
		{
			indeks_Ak = k-1;
		}
	}
	if (a==10)
		{
			printf("\nD\ata not found");
		}
}
