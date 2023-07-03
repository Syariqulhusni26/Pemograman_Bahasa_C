#include <stdio.h>
main()

{
	int a = 1; // a nya dimulai dari satu
	
	do {   
		printf("%d ", a); // pada pernyataan do, statementnya dijalankan terlebih dahulu
		a++; // jika benar maka var a bertambah 1
	}while ( a <= 10); // lalu dicek kondisi pernyataannya jika a lebih kecil 
						// dari 10 maka dijalankan
}
