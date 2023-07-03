#include <stdio.h>

struct matakuliah
{
	int kode_admk;
	char namamk[30];
	int jumlahsks;
	int jam;
	char prodi[30];
	int semester;
};

main()
{
	struct matakuliah mat[2];

	int i = 0, j;
	
	printf("Masukkan jumlah matakuliah yang ingin dimasukkan : ");
	scanf("%d", &j);
	
	for(i = 1; i<=j; i++)
	{
	printf("\nMasukkan matakuliah ke :%d \n\n",i);
	
	printf("Masukkan kode mata kuliah matakuliah : ");
	scanf("%d", &mat[i].kode_admk);
	printf("Masukkan nama mata kuliah : ");
	scanf("%s", &mat[i].namamk);
	printf("Masukkan jumlah SKS : ");
	scanf("%d", &mat[i].jumlahsks);
	printf("Masukkan jumlah jam : ");
	scanf("%d", &mat[i].jam);
	printf("Masukkan Prodi : ");
	scanf("%s", &mat[i].prodi);
	printf("Masukkan semester : ");
	scanf("%d", &mat[i].semester);
	
	}
	for (i=1;i<=j;i++)
	{
	printf("Datanya adalah \n\n");
	printf("kode matkul : %d\n", mat[i].kode_admk);
	printf("Nama matkul : %s\n", mat[i].namamk);
	printf("Jumlah SKS : %d\n", mat[i].jumlahsks);
	printf("Jumlah jam : %d\n", mat[i].jam);
	printf("Prodi : %s\n", mat[i].prodi);
	printf("Semester : %d\n", mat[i].semester);
	
	}
}
