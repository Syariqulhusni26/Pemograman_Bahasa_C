//fungsi tanpa  (argumen/input) tanpa ada (return valuenya/output)
// argumen = a, b
//
#include <stdio.h>
void minimum ();
main()

{
	 minimum();
	
	
}

void minimum ()

{
	int x, y;
	
	printf("Masukkan angka : ");
	scanf("%d",&x);
	printf("Masukkan angka : ");
	scanf("%d",&y);
	printf("Nilai yang diinputkan adalah %d dan %d \n", x, y);
	
	if(x<y)
	printf("Nilai minimum adalah : %d", x);
	else
	printf("Salah %d", y);
	
		
}
