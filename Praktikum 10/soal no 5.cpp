#include <stdio.h>
#include <conio.h>

main()

{
	int a, Angka, jumlah = 0;
	char karakter ;
	
	printf(" ------------- Menghitung Jumlah Angka Suatu Bilangan \n");
	printf(" Masukkan Bilangan : ");
	
	a = 1;
	
	do
	{
		karakter = getchar();
		switch(karakter)
		{
			case '1' : Angka = 1 ; break ;
			case '2' : Angka = 2 ; break ;
			case '3' : Angka = 3 ; break ;
			case '4' : Angka = 4 ; break ;
			case '5' : Angka = 5 ; break ;
			case '6' : Angka = 6 ; break ;
			case '7' : Angka = 7 ; break ;
			case '8' : Angka = 8 ; break ;
			case '9' : Angka = 9 ; break ;
			case '0' : Angka = 0 ; break ;
		}
		if (karakter !='\n')
		jumlah = jumlah + Angka ;
		
		if ( a !=1)
		{
			printf(" + ");
			printf("%d", Angka);
			a++;
		}
	
		}while (karakter != '\n');
		printf("%d\n\n\n", jumlah);
}
