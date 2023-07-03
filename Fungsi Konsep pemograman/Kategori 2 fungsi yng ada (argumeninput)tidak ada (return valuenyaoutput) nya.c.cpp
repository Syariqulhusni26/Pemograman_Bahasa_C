//fungsi yng ada (argumen/input), tidak ada (return valuenya/output) nya
// argumen = a, b
//
#include <stdio.h>

void jumlah (int a, int b);
main()

{
	int x, y;
	printf("Masukkan angka : ");
	scanf("%d",&x);
	printf("Masukkan angka : ");
	scanf("%d",&y);
	
	jumlah(x, y);
	
}

void jumlah(int a, int b)
// void dibuat karena tidak ada return value
{
	int hasil;
	hasil = a + b;
	
	printf("Hasil dari %d + %d = %d", a, b, hasil);
}
