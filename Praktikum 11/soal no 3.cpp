#include <stdio.h>
#include <conio.h>

main()

{
	int a, b, c, faktor, hitung = 0;
	
	printf("----==== Bilangan Prima ====---- \n\n");
	printf(" Masukkan angka : ");
	scanf("%d", &a);
	
	b=2;
	
	while (1)
	{
		faktor = 0;
		
		for(c=1; c<=b; c++)
		{
			if(b%c==0)
				faktor++ ;
		}
		
		if (faktor==2)
		{
				printf("%d ", b);
				hitung++;
		}
		if(hitung==a)
			break;
			b++;
	}
		
	
}
	
	