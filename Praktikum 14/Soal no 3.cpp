#include <stdio.h>

void tambah(int* nilai1, int* nilai2);
int main()

{
	int a, b;

	printf("Masukkan nilai 1 = ");
	scanf("%d", &a);
	printf("Masukkan nilai 2 = ");
	scanf("%d", &b);
	
	tambah(&a, &b);
	printf("Hasil setelah dinaikan adalah : %d, %d\n", a, b);

}

void tambah(int* x, int* y)
{
	*x=*x+2;
	*y=*y+2;
}

