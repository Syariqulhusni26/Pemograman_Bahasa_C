#include <stdio.h>
#include <stdlib.h>
main()

{
	 int a;
	 char status;
	 
	printf("*** Kepribadian bedasarkan warna bola mata***\n");
	printf("Petunjuk : \n");
	printf("Inputkan angka 1 jika warna bola mata anda biru \n");
	printf("Inputkan angka 2 jika warna bola mata anda hitam \n");
	printf("Inputkan angka 3 jika warna bola mata anda cokelat \n");
	printf("Inputkan angka 4 jika warna bola mata anda abu abu \n");
	
	benar :
	printf("Inputkan warna bola mata Anda : ");
	scanf("%d", &a);
	
	
	switch (a){
	case 1:
		printf("\n Anda adalah pribadi yang lembut dan penuh kasih sayang ");
		break;
	case 2:
		printf("\n Anda adalah pribadi yang kuat dan sederhana");
		break;
	case 3 :
		printf("\n Anda adalah pribadi yang penyabar dan stabil");
		break;
	case 4 :
		printf("\n Anda adalah pribadi yang pejuang yang kemauan keras");
		break;
		default :
		printf("Pilihan yang tersedia hanya 1 sampai 4 \n");
		printf("trimakasih.");
	}
	printf("\n ingin mencoba lagi (Pilih y/n)..");
	status = getchar() ;
	scanf("%c", &status);
		if( status=='y')
		goto benar;
	else 
		printf("\n Selesai");
	exit(0);

	
		
}
