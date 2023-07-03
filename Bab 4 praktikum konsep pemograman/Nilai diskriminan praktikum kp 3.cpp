#include <stdio.h>
main()

{
	int a, b, c, hasil ;
	puts("==============Bilangan Diskriminan ================");
	printf("masukkan angka a : ");
	scanf("%d", &a);
	
	printf("masukkan angka b : ");
	scanf("%d", &b);
	
	printf("masukkan angka b : ");
	scanf("%d", &c);
	
	hasil = b*b-4*a*c ;
	
	printf(" Nilai diskriminannya adalah : %d\n", hasil);
	
	
}