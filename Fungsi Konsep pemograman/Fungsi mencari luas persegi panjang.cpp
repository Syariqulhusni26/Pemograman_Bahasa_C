#include <stdio.h>
float luas_persegi_panjang(float a, float  b);

main()

{

	float x = 20.5, y = 4.57;
			
		float hasil;
	
	printf(" ini adalah bilangan %f dan %f", x, y);
	
	hasil = luas_persegi_panjang(x,y);
	
	printf("Hasilnya adalah : %f", hasil);
		
}

float luas_persegi_panjang(float a, float b)

{
	int hasil;
	hasil = a*b;
	return hasil;
}
