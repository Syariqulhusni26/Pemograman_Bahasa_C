//fungsi yng ada (argumen/input) tanpa (return valuenya/output)
// argumen = a, b
//
#include <stdio.h>
void minimum (int x, int y);
main()

{
	int a, b;
	printf("Masukkan angka : ");
	scanf("%d",&a);
	printf("Masukkan angka : ");
	scanf("%d",&b);
	
	minimum(a, b);
	
	
}

void minimum (int x, int y)

{
	printf("Nilai yang diinputkan adalah %d dan %d \n", x, y);
	if (x<y)
	printf("Nilai minimum adalah : %d", x);
	else
	printf("Salah %d", y);
		
}
