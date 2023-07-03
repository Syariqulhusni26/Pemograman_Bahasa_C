#include <stdio.h>
main()

{
	int b;
	
	for ( b=2; b<=100; b+=2){
	
		printf("menambahkan break pada bahasa c \n");
		break;
		// Kenapa kalimat "menambahkan break pada bahasa c \n" 
		//hanya tampil sekali? Jawabannya karena saat kondisi perulangan pertama benar maka pernyataan di eksekusi,
		// dan dalam pernyataan terdapat perintah break yang berfungsi untuk keluar dari loop, sehingga loop berhenti setelah satu kali perulangan.
	}
		
}