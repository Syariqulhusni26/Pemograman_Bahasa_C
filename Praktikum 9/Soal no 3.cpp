#include <stdio.h>
int main()
{
	char huruf = 'y';
	int a = 0, hasil, min=99999, max=0, rata ;
	int c = 0 ;
	
	while (huruf == 'y' || huruf == 'Y' )
	{
		printf("Masukkan bilangan ke %d : ", c+1);
		scanf("%d", &a);
		c++;
		
		printf("Apakah ingin memasukkan data lagi (y/t): ");
		getchar();
		huruf = getchar();
		
		if(max < a) max = a;
		if(min > a) min = a;
		hasil+=a;
		rata=hasil/c;
		
	}
	printf(" \n hasilnya adalah %d", hasil-1);
	printf(" \n hasil rata ratanya adalah  %d", rata);
	printf(" \n hasil dari maximum adalah  %d", max);
	printf(" \n hasilnya dari minimum adalah %d", min);
		
}
