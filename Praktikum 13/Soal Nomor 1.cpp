#include <stdio.h>
void ganjil(int a);

main()
{
	int b;
	printf("Masukkan Nilai : ");
	scanf("%d", &b);
	
	ganjil(b);

}

void ganjil(int a)

{
	int hasil;
	
	if (a%2==0)
		printf("%d adalah bilangan genap", a) ;
	else if (a%2==1)
		printf("%d adalah bilangan ganjil", a);
}

