#include <stdio.h>

main()

{
	int a;
	
	printf("masukkan angkamu : ");
	scanf("%d", &a);
	
	switch (a)
{
	case 4 :
		printf(" \n ini adalah 1");
		break ;
	case 3 :
		printf("\n Kamu kena tipu ");
		break;
	default :
		printf(" invalit operation");
		
}
}