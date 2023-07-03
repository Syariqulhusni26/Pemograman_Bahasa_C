#include <stdio.h>
main()

{
	int array[5];
	int masukkan, perulangan;
	
	for (masukkan = 0; masukkan<5; masukkan++)
	{
		printf("Masukkan elemen ke %d :", masukkan+1);
		scanf("%d", &array[masukkan]);
	}
	
	printf("Elemen array yang diinputkan adalah :\n");
	
	for( perulangan = 0; perulangan <5; perulangan++ )
	{
		printf("%d\n", array[perulangan]);
	}
}

