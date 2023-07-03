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
	struct karyawan K[2];

	int i = 0, j;
	
	printf("Masukkan jumlah data yang ingin dimasukkan : ");
	scanf("%d", &j);
	
	for(i = 0; i<=j; i++)
	{
	printf("Masukkan Data karyawan ke :%d \n\n",i+1);
	
	printf("Masukkan Nama karyawan : ");
	scanf("%s", K[i].nama);
	printf("Masukkan id karyawan : ");
	scanf("%d", &K[i].id);
	printf("Masukkan departemen karyawan : ");
	scanf("%s", K[i].departemen);
	printf("Masukkan jabatan karyawan : ");
	scanf("%s", K[i].jabatan);
	printf("Masukkan gaji karyawan : ");
	scanf("%d", &K[i].gaji);
	}
	for (i=0;i<=j;i++)
	{
	printf("Datanya adalah \n\n");
	printf("Nama Karyawan : %s\n", K[i].nama);
	printf("id Karyawan : %d\n", K[i].id);
	printf("departemen Karyawan : %s\n", K[i].departemen);
	printf("jabatan Karyawan : %s\n", K[i].jabatan);
	printf("gaji Karyawan : %d\n", K[i].gaji);
	
	}
}

