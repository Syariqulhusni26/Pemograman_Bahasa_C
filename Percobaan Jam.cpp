#include <stdio.h>
int konversi (int detik);
main()

{
	int a;
	
	puts ("-------------- Konversi Waktu -------------");
	printf("Masukkan Detik : ");
	scanf("%d", &a);
	
	konversi (a);
	
}

 int konversi(int detik)
{
	int jam, menit;
	
	jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik / 60;
    detik = detik -(60*menit); 
    
    printf("Waktu jam adalah : %d\n", jam);
    printf("Waktu menit adalah : %d\n", menit);
    printf("Waktu detik adalah : %d\n", detik);
}



