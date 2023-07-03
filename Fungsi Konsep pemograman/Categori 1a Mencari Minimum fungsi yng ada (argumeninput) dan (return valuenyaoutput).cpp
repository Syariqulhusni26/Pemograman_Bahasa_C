//fungsi yng ada (argumen/input) dan (return valuenya/output)
// argumen = a, b
//
#include <stdio.h>
int minimum (int x, int y);
main()

{
	int a, b, hasil;
	printf("Masukkan angka : ");
	scanf("%d",&a);
	printf("Masukkan angka : ");
	scanf("%d",&b);
	
	hasil = minimum(a, b);
	printf("Nilai yang diinputkan adalah %d dan %d \n", a, b);
	printf("Nilai minimum adalah = %d", a, b, hasil);
}

int minimum (int x, int y)

{
	if (x<y)
	return x;
	else
	return y;
		
}
