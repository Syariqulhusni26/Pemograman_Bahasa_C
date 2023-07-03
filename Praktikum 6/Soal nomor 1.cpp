#include <stdio.h>
main()

{
	int a, b, c, D ;
	float x1, x2 ;
	
	printf("========----- Menghitung diskriminan dan Mencari akar -----========\n");
	
	printf(" Masukkan nilai pertama : ");
	scanf("%d", &a);
	printf(" Masukkan nilai kedua : ");
	scanf("%d", &b);
	printf(" Masukkan nilai ketiga : ");
	scanf("%d", &c);
	
	D = b*b-4*a*c;
	printf(" Diskriminannya adalah : %d\n", D);
	
	if (D == 0){
		printf("Akar real yang sama \n");
		
		x1 = x2 = (-b + (D)) / 2*a;
		
		printf("x1 : %.2f\n", x1);
		printf("x2 : %.2f\n", x2);
	}
	
	else if (D > 0){
		printf("Akar real yang berlainan \n");
		
		x1 = (-b + (D)) / 2*a ;
		x2 = (-b - (D)) / 2*a ;
		
		printf("x1 : %.2f\n", x1);
		printf("x2 : %.2f\n", x2);
	}
	
	else if (D < 0){
		printf("Akar imaginair yang berbeda \n");
		
		x1 = -b / 2*a + ((-D) / 2*a);	
		x2 = -b / 2*a - ((-D) / 2*a);
		
		printf("x1 : %.2f\n", x1);
		printf("x2 : %.2f\n", x2);	
	}
	
	else
		printf(" (Akar tidak real dan imaginair) \n ");
	
	
	
}