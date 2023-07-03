#include <stdio.h>
main()

{
	 int a;
	printf("==============BULAN MASEHI=============\n");
	printf("Masukkan Bulan Ke berapa :");
	scanf("%d", &a);
	
	switch (a){
	case 1:
		printf("\n januari");
		break;
	case 2:
		printf("\n Febuari");
		break;
	case 3 :
		printf("\n Maret");
		break;
	case 4 :
		printf("\n April");
		break;
	case 5 :
		printf("\n Mei");
		break;
	case 6 :
		printf("\n Juni");
		break;
	case 7 :
		printf("\n Juli");
		break;
	case 8 :
		printf("\n Agustus");
		break;
	case 9 :
		printf("\n September");
		break;
	case 10 :
		printf("\n Oktober");
		break;
	case 11 :
		printf("\n November");
		break;
	case 12 :
		printf("\n Desember ");
		break;
	default :
		printf("Angka bulan yang anda masukan salah");
	}
		
}