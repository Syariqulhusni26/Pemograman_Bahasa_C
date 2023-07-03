#include <stdio.h>

main()

{
	int A[] = {10, 14, 19, 26, 27, 31, 33, 35, 42, 44};
	int a, e = 10, search;

		
	for(a=0; a<e; a++)
	{
		printf("A[%d] = %d \n", a, A[a]);
	}
	
	printf("Masukkan nilai yang ingin dicari indeksnya :" );
	scanf("%d", &search);
	
	for(a=0; a<e; a++)
	{
		if(A[a] == search)
		{
			printf("Nilai yang anda cari beradai di indeks = [%d]", a);	
			break;
		}
	}
	if (a == e)
	{
		printf("Maaf Nilai yang anda cari tidak ditemukan");
	}
}
