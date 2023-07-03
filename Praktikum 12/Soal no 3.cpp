#include <stdio.h>
float kuadrat (float);
main()

{
	float bil;
	
	printf("Masukkan Bilangan x : ");
	scanf("%f", &bil);
	kuadrat(bil);	
}

float kuadrat (float bilangan)
{
	float hasil;
	
	hasil;
	
	hasil = bilangan*bilangan;
	
	printf("Hasil setelah bilangan dikuadratkan adalah : %g\n", hasil);
	return hasil;
}
