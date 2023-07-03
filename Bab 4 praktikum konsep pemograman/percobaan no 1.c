#include <stdio.h>
  main()

{
	int a ;
	
	printf("Masukkan bilangan anda : ");
	scanf("%d", &a);
	
	if(a%2 == 0)
	printf("Ini adalah bilangan genap", a);
	else
	printf("Ini adalah bilangan ganjil", a) ;
}