#include <stdio.h>
#include <conio.h>
main()

{
	int a, b;
	
	printf("Menampilkan bilangan ganjil \n");
	printf("Masukkan angka : ");
	scanf("%d", &a);
	
	for(b=1;b<a;b++)
	{
		if (b%2==1)
		{
			if (b%3==0)
			continue;
			printf("%d ", b);
		}
	}
	
}
