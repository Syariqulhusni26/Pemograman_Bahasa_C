#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

main()

{
	int a =0, b, c, nilai=0 ;
	char jawab;
	
	printf("Masukkan nilai : ");
	scanf("%d", &c);
	
	while (a < c)
	{
		for(b=0; b<=a;b++)
		{
			nilai++;
		}
	
	a++;
	printf("%d ", nilai);

	}	
}



