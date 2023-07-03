//fungsi yng tanpa (argumen/input), tapi ada (return valuenya/output) nya
// argumen = a, b
//
#include <stdio.h>

int jumlah ();
main()

{
	int nilai;
	nilai = jumlah();
	printf(" Hasil penjumlahan %d =", nilai);
	
}

int jumlah()

{
	int x, y, hasil;
	printf("Masukkan angka : ");
	scanf("%d",&x);
	printf("Masukkan angka : ");
	scanf("%d",&y);
	hasil = x + y;
	return hasil;
}
