#include <stdio.h>
int triangular(int n);

main()

{
	int x;
	 printf("Masukkan nilai : ");
	 scanf("%d", &x);
	 triangular(x);
	 	
}

int triangular(int x)

{
	int a, b = 0;
	x;
	
	for(a=0; a<=x; a++)
	// disini tidak boleh menggunakan kurung kurawal karena tidak akan menampilkan hasil
		b = a + b;
		printf("Hasilnya : %d\n", b);
		return x;
	
}
