#include <stdio.h>
int  main()

{
	int a, b=1, x, y=0;
	printf("masukkan nilai angka : ");
	scanf("%d", &a);
	 if (a<=1){	
	 printf("%d bukan bilangan prima\n", a);
	return 0 ;	
	 
}
	for (b; b<=a; b++) {
			x = a%b ;
			if (x==0)
						y++;
						
	}
	if (y==2)
	printf("%d adalah bilangan prima\n", a);
	else
	printf("%d adalah bukan bilangan prima\n", a);
	
	 
}