#include <stdio.h>
int penjumlahan (int x, int y);
int perkalian (int x, int y);
int pengurangan (int x, int y);

main()

{
	
	int nilai,nilai2,nilai3, a = 4, b= 5 ;
	nilai = penjumlahan (a,b);
	nilai2 = perkalian (a,b);
	nilai3 = pengurangan (a,b);
	
 
	printf("nilai : %d\n", nilai);
	printf("nilai2 : %d\n", nilai2);
	printf("nilai3 : %d\n", nilai3);
}

int penjumlahan (int x, int y)

{
	
		int hasil;
		hasil = x + y ;
		return hasil;
}

int perkalian (int x, int y)

{
	int hasil;
	hasil = x * y;
	return hasil;
	
}

int pengurangan (int x, int y)

{
	int hasil;
	hasil : x - y ;
	return hasil;
}


