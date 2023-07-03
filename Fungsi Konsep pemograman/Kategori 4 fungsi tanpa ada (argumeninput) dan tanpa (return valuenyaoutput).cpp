//fungsi tanpa ada (argumen/input) dan tanpa (return valuenya/output)
// argumen = a, b
//
#include <stdio.h>

void jumlah ();
main()

{
	
 jumlah();	
}

void jumlah()

{
	int hasil, x, y;
	printf("Masukkan angka : ");
	scanf("%d",&x);
	printf("Masukkan angka : ");
	scanf("%d",&y);
	
	hasil = x + y;
	printf("hasil dari %d + %d = %d", x, y, hasil);
}
