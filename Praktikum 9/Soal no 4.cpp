#include <stdio.h>
main()

{
	char karakter;
	int jumspasi = 0, jumkarakter = 0, jumhurufkecil = 0, jumhurufbesar = 0, jumangka = 0, hasil ;
	printf("Masukkan Kalimat Sembarang : ");
	scanf("%c", &karakter);
	
	while (karakter != '\n')
	{
		if ( karakter == ' ')
		
			jumspasi++;
		else if (karakter >='a' && karakter <='z' )
			jumhurufkecil++;
		else if (karakter >='A' && karakter <='Z')
			jumhurufbesar++;
		else if (karakter >='0' && karakter <='9')
			jumangka++;
		else
			jumkarakter++;
		scanf("%c", &karakter);
		
	}
	
	hasil = jumkarakter + jumspasi;
	printf("Total semua karakter adalah : %d\n", hasil);
	printf("jumlah spasi adalah : %d\n", jumspasi);
	printf("jumlah karakter adalah  : %d\n", jumkarakter);
	printf("jumlah huruf kecil adalah adalah  : %d\n", jumhurufkecil);
	printf("jumlah huruf besar adalah  : %d\n", jumhurufbesar);
	printf("jumlah angka adalah  : %d\n", jumangka);
}
