#include <stdio.h>
float konversi(float a, char b, char c);

main()
{
	float suhu, hasil;
	char asal, tujuan;
	printf("masukkan nilai suhu : ");
	scanf("%f", &suhu);
	printf("masukkan suhu asal: ");
	scanf("\n%c", &asal);
	printf("masukkan suhu tujuan: ");
	scanf("\n%c", &tujuan);

	hasil = konversi(suhu, asal, tujuan);
	printf("hasil konversi suhu %g %c = %g %c\n", suhu, asal, hasil, tujuan);

}

 float konversi(float a, char b, char c)
{
	float jumlah;
	
	if(b == 'C' && c == 'R')
		jumlah = 0.8 * a;
	else if(b == 'C' && c == 'F')
		jumlah = (1.8 * a) + 32;
	else if(b == 'F' && c == 'C') 
		jumlah = 0.55 * (a - 32);
	else if(b == 'F' && c == 'R') 
		jumlah = 0.4 * (a - 32);
	else if(b == 'R' && c == 'F') 
		jumlah = (2.25 * a) + 32;
	else if(b == 'R' && c == 'C') 
		jumlah = 1.25 * a;
	return jumlah;
}


