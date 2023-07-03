#include <stdio.h>
main()

{
	float a, b, c;
	int menu ;
	
	
	printf(" ===--- Kalkulator Sederhana ---=== \n ");
	
	printf("Masukkan bilangan : ");
	scanf("%f", &a);
	
	printf("Masukkan bilangan : ");
	scanf("%f", &b);
	
	printf("Menu Matematika \n\n ");
	
	printf("1. Penjumlahan\n ");
	printf("2. Pengurangan\n ");
	printf("3. Perkalian\n ");
	printf("4. Pembagian \n\n ");
	
	printf(" Masukkan Yang anda mau : ");
	scanf("%d\n", &menu);
	
	if (menu == 1){
	
		c = a + b ;
		printf("Hasilnya operasinya adalah : %g + %g = %g", a, b, c);
	}
	
	else if (menu ==2){
		
		c = a - b ;
		printf("Hasilnya operasinya adalah : %g - %g = %g", a, b, c);
	}
	
	else if (menu ==3){
	
		
		c = a * b ;
		printf("Hasilnya operasinya adalah : %g * %g = %g", a, b, c);	
	}
	
	else if (menu == 4){
	
		
		c = a / b ;
		printf("Hasilnya operasinya adalah : %g / %g = %g", a, b, c);
	}
}
	
	