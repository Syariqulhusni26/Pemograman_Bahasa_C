#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()

{
	int a, b, c, nilai;
	char jawab ;
	do{
		
		nilai = 0;a=0;
		printf (" Masukkan nilai : ");
		scanf("%d", &c);
		
		while (a<c)
		{
				for(b=0; b<a; b++)
				{
						nilai++;
				}
				a++;
				printf("%d ", nilai);
		}
		printf(" \n Apakah anda ingin keluar (y/t) ? ");
		fflush(stdin);
		
		jawab = getchar();
		if (jawab !='t')
			exit(0);
		else
			jawab = 'y';
	}
	while(jawab == 'y');
	getch();
}