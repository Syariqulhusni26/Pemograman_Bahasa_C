//fungsi tanpa ada (argumen/input) tapi ada (return valuenya/output)
// argumen = a, b
//
#include <stdio.h>
int minimum ();
main()

{
	int nilai;
	
	
	nilai = minimum();
	printf(" Nilai minimum adalah : %d", nilai);
	
	
}

int minimum ()

{
	int x, y;
	
	printf("Masukkan angka : ");
	scanf("%d",&x);
	printf("Masukkan angka : ");
	scanf("%d",&y);
	printf("Nilai yang diinputkan adalah %d dan %d \n", x, y);
	
	if (x<y)
	return x;
	else
	return y;
		
}
