#include <stdio.h>

struct negara
{
	char nama_negara[30];
	char ibukota[30];
};

main()
{
	struct negara N1;
	struct negara N2;

	
	printf("Masukkan Data negara pertama\n=");
	
	printf("Masukkan Nama negara : ");
	scanf("%s", &N1.nama_negara);
	printf("Masukkan nama ibukota : ");
	scanf("%s", &N1.ibukota);	
	
	printf("Masukkan Data negara kedua\n=");
	
	printf("Masukkan Nama negara : ");
	scanf("%s", &N2.nama_negara);
	printf("Masukkan nama ibukota : ");
	scanf("%s", &N2.ibukota);			
	
	printf("Data pertama adalah \n\n");
	printf("Nama negara : %s\n", N1.nama_negara);
	printf("nama ibukota : %s\n", N1.ibukota);
	
	printf("Data kedua adalah \n\n");
	printf("Nama negara : %s\n", N2.nama_negara);
	printf("nama ibukota : %s\n", N2.ibukota);
	
	}

