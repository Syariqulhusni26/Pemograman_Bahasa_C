#include <stdio.h>
   int main()

{
	float a, diskon ;
	
	printf("Masukkan total belanjaan : ");
	scanf("%f", &a);
	
	if(a>=100000){
	
	diskon = 0.05*a ;
	a -=diskon ;

	printf("Selamat anda mendapatkan potongan harga menjadi Rp %.f\n ", a);
}
	else
	printf("Anda tidak mendapatkan diskon", a);

}