#include <stdio.h>
main()

{
	char nama[100][100];
	int IPK[100];
	int i = 0, j;
	
	puts("=====------- Mengisi data Mahasiswa dan IPK------=======");
	printf("Masukkan Jumlah orang : ");
	scanf("%d", &j);
	getchar();
	
	for(i = 0; i<j;i++)
	{
		printf("Nama mahasiswa ke -%d :", i+1);
		scanf("%[^\n]", nama[i]);
		getchar();
		printf("Nilai IPK ke -%d : ",i+1);
		scanf("%d", &IPK[i]);
		getchar();		
	}
	puts("Hasil nya :");
	for (i = 0; i<j;i++)
	{
		printf("\nNama mahasiswa ke -%d %s", i+1, nama[i]);
		printf("\nNilai IPK ke -%d %d", i+1, IPK[i]/2);
	}
	
}
