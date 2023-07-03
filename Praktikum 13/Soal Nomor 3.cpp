#include <stdio.h>
int bilangan_prima(int x);

main()
{
	int nilai;
	printf("Masukkan bilangan prima : ");
	scanf("%d", &nilai);
	
	if (bilangan_prima(nilai)==1)
		printf("ini adalah bilangan prima");
	else
		printf("ini adalah bukan bilangan prima");

}

 int bilangan_prima(int x)
{
	int a, nilai = 0;
	
	a = 1;
	while (a<x)
	{
		if (x%a==0)
			nilai++;
		a++;
	}
	if (nilai==2)
		return 1;
	else
		return 0;
	
}

