#include <stdio.h>
main()

{
	int angka, masukan;
	
	printf("======------RUMUS MATEMATIKA-----======\n");
	printf("000---Menu---000\n");
	printf("1. Menghitung volume kubus \n");
	printf("2. Mengitung luas lingkaran \n");
	printf("3. Menghitung volume silinder \n\n");
	
	printf("Masukkan pilihan anda : ");
	scanf("%d", &angka);
	
	
	switch (angka)
	{
		case 1 :
			printf("Apa yang mau ditanya : " );
			scanf("%d", &masukan);
			printf("(vol = sisi * sisi * sisi) \n");
			break;
		case 2 :
			printf("Apa yang mau ditanya : " );
			scanf("%d", &masukan);;
			printf("(luas lingkaran = 3.14 * r * r ) \n " );
			break ;
		case 3 :
			printf("Apa yang mau ditanya : " );
			scanf("%d", &masukan);;
			printf("(Vol = 3.14 * r * r * t ) \n ");
			break;
		default:
			printf("\n Tidak dimengerti ");
	}
	
}

