#include <stdio.h>
main()

{
	char karakter;
	
	printf("Masukkan karakter anda :");
	
	while (6)
	{
		karakter = getchar();
		if (karakter =='\n')
		break;
	}
	printf("selesai \n");
	getchar();
}
