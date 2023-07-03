// Program menampilkan isi array
#include <stdio.h>
main()

{
		int A[5];
		int a, b;
		
		printf("masukkan elemen pertama : ");
		scanf("%d", &A[0]);
		printf("masukkan elemen kedua : ");
		scanf("%d", &A[1]);
		printf("masukkan elemen ketiga : ");
		scanf("%d", &A[2]);
		printf("masukkan elemen keempat : ");
		scanf("%d", &A[3]);
		printf("masukkan elemen kelima : ");
		scanf("%d", &A[4]);
		
	printf("Elemen array yang diinputkan adalah :\n");
	
	for (a=0; a<5; a++)
	{
		printf("%d ", A[a]);
	}
}
