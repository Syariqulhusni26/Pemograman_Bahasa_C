#include <stdio.h>
main()

{
	int i,j ;
	printf("===========----Bilangan Ganjil----===========\n");
	printf(" Masukkan Bilangan : ");
	scanf("%d", &i);
	
	
	for( j =1  ; j<=i; j+=2 )
		printf("%d ", j);
		
		
}
