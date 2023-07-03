#include <stdio.h>
int permutasi (int n, int r);
int kombinasi (int n, int r);

main()

{
	
	int x, y, z;
	
	puts("Masukkan Nilai pertama: ");
	scanf("%d", &x);
	
	puts("Masukkan Nilai kedua : ");
	scanf("%d", &y);
	
	puts("Pilihan :");
	printf("1. Pemutasi \n2. Kombinasi\n");
	scanf("%d", &z);
	
	switch (z)
	{
		case 1:
			printf("%d", permutasi(x,y));
			break;
		case 2:
			printf("%d", kombinasi(x,y));
			break;
		default :
			printf("\n");
	}
	
}

int permutasi (int n, int r)
{

	int nilai, atas = 1, bawah = 1, x, y;
	y = n - r;
	for(x=n;x>=1;x--)
	{
		atas = atas * x;
	}
		for(x=y;x>=1;x--)
	{
		bawah = bawah * x;
	}
	nilai = atas / bawah;
	printf("Permutasi = %d\n", nilai);

}

int kombinasi (int n, int r)

{
	int x, y, z = 1, atas = 1, bawah = 1, hasil;
	y = n - r;
	
	for(x=n;x>=1;x--)
	{
		atas = atas * x;
	}
	for(x=y;x>=1;x--)
	{				
		bawah = bawah * x;
	}	
	for(x=r;x>=1;x--)
	{
		z = z * x;
	}
	
	hasil = atas/(z*bawah);
	printf("Kombinasi = %d\n", hasil);

}
