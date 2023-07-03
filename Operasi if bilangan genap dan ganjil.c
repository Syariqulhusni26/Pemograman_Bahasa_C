#include <stdio.h>
 int main()

{
	float x;
	printf("Masukkan uang anda : ");
	scanf("%f", &x);
	
	if (x>20.000)
	printf(" Kamu dapat membeli ayam penyet ", x);
	else
	printf(" Kamu dapat membeli bakso", x);

}