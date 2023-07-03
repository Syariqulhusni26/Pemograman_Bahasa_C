#include <stdio.h>
main()
{
	int a;
	printf("==========--- Konversi Nilai Angka ke nilai Huruf -----=========\n");	
	printf("masukkan nilai uas anda = ");
	scanf("%d", &a);
	
	if (a>=90)
	
	printf("grade kamu adalah A", a);
	else if (a>=60&&a<80)
	printf("grade kamu adalah B", a);
	else if (a>=55&&a<60)
	printf("grade kamu adalah C", a);
	else if (a>40&&a<55)
	printf("grade kamu adalah D", a);
	else if (a<40)
	printf("grade kamu adalah E", a);	
	
	
	
	
}