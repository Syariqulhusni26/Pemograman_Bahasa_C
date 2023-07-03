#include <stdio.h>
void tukar (int *px, int *py);
main()

{
	
	int a = 100, b = 200;
	
	puts("Nilai Sebelum pemanggilan fungsi");
	printf(" a = %d  b = %d\n", a, b);
	
	tukar(&a, &b);
	
	printf("Nilai sesudah pemanggilan fungsi \n");
	printf(" a = %d  b = %d\n", a, b);
}

void tukar(int *px, int *py)
{
	int z;
	
	z = *px;
	*px = *py;
	*py = z;
	
	printf(" Ini adalah nilai tukar()\n");
	printf(" x = %d  y = %d\n", *px, *py);
}
