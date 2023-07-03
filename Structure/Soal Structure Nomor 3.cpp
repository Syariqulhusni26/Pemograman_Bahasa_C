#include <stdio.h>

struct kendaraan
{
	char nama_mobil[30];
	char warna[30];
};

main()
{
	struct kendaraan K1;
	struct kendaraan K2;

	
	printf("Masukkan Data kendaraan pertama\n=");
	
	printf("Masukkan Nama mobil : ");
	scanf("%s", &K1.nama_mobil);
	printf("Masukkan warna mobil : ");
	scanf("%s", &K1.warna);	
	
	printf("Masukkan Data kendaraan kedua\n=");
	
	printf("Masukkan Nama mobil : ");
	scanf("%s", &K2.nama_mobil);
	printf("Masukkan warna mobil : ");
	scanf("%s", &K2.warna);			
	
	printf("Data pertama adalah \n\n");
	printf("Nama mobil : %s\n", K1.nama_mobil);
	printf("warna mobil : %s\n", K1.warna);
	
	printf("Data kedua adalah \n\n");
	printf("Nama mobil : %s\n", K2.nama_mobil);
	printf("warna mobil : %s\n", K2.warna);
	
	}

