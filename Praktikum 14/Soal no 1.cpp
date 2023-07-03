#include <stdio.h>
int max (int a, int b);
main()

{
	
	int x, y;
	
	puts("Masukkan Nilai pertama: ");
	scanf("%d", &x);
	
	puts("Masukkan Nilai kedua : ");
	scanf("%d", &y);
	
	if (x>y)
		printf("%d adalah bilangan terbesar", max (x,y));
	else
		printf("%d adalah bilangan terkecil", max (x,y));
	
}
int max (int a, int b)
{

	int hasil;
	
	if (a>b)
		return a;
	else
		return a;
}
