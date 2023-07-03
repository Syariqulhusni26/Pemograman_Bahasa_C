#include <stdio.h>

struct karyawan
{
	char nama[30];
	int id;
	char departemen[30];
	char jabatan[30];
	int gaji;
};

main()
{
	struct karyawan K1;
	struct karyawan K2;

	
	printf("Masukkan Data karyawan pertama\n=");
	
	printf("Masukkan Nama karyawan : ");
	scanf("%s", &K1.nama);
	printf("Masukkan id karyawan : ");
	scanf("%d", &K1.id);
	printf("Masukkan departemen karyawan : ");
	scanf("%s", K1.departemen);
	printf("Masukkan jabatan karyawan : ");
	scanf("%s", K1.jabatan);
	printf("Masukkan gaji karyawan : ");
	scanf("%d", &K1.gaji);
	
	
	printf("Masukkan Data karyawan kedua\n");
	
	printf("Masukkan Nama karyawan : ");
	scanf("%s", &K2.nama);
	printf("Masukkan id karyawan : ");
	scanf("%d", &K2.id);
	printf("Masukkan departemen karyawan : ");
	scanf("%s", K2.departemen);
	printf("Masukkan jabatan karyawan : ");
	scanf("%s", K2.jabatan);
	printf("Masukkan gaji karyawan : ");
	scanf("%d", &K2.gaji);
	

	
	printf("Data pertama adalah \n\n");
	printf("Nama Karyawan : %s\n", K1.nama);
	printf("id Karyawan : %d\n", K1.id);
	printf("departemen Karyawan : %s\n", K1.departemen);
	printf("jabatan Karyawan : %s\n", K1.jabatan);
	printf("gaji Karyawan : %d\n", K1.gaji);
	
	printf("Data kedua adalah \n\n");
	printf("Nama Karyawan : %s\n", K2.nama);
	printf("id Karyawan : %d\n", K2.id);
	printf("departemen Karyawan : %s\n", K2.departemen);
	printf("jabatan Karyawan : %s\n", K2.jabatan);
	printf("gaji Karyawan : %d\n", K2.gaji);
	}

