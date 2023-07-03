#include <stdio.h>
 main()
 
 {
 	int x;
 	
	printf("------------------- Makanan -------------------- \n");
	printf(" Masukkan jumlah uang anda : ");
	scanf(" %d", &x);
	
	if ( x >=91000 && x <= 100000 )
		printf("\n Kamu bisa membeli Pizza ", x);
	else if ( x >= 81000 && x <= 90000 )
		printf("\n Kamu bisa membeli  KFC", x);
	else if ( x>= 71000 && x <= 80000 )
		printf("\n Kamu bisa membeli Donat ", x);
	else if ( x >= 61000 && x <= 70000 )
		printf("\n kamu bisa membeli Nila Goreng ", x);
	else if ( x>= 51000 && x<= 60000 ) 
		printf ("\n Kamu bisa membeli Ayam Geprek ", x);
	else 
		printf("\n Kamu bisa membeli Bakso ", x);
		  
 }