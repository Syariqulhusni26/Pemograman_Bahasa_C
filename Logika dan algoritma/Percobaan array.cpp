#include <stdio.h>
#include <conio.h>
main()

{
	int indeks1= 1, nilai[10] ;
	
	
	// input nilai mahasiswa
	printf(" input nilai 10 mahasiswa : \n");
	for ( indeks1=0;indeks1<10;indeks1++)
	{
		printf("mahasiswa %d: ", indeks1+1);
		scanf("%d", &nilai[indeks1]);
	
	}
	//tampilkan nilai mahasiswa
	printf("nilai mahasiswa yang diinputkan");
	for(indeks1=0;indeks1<10;indeks1++)
	{
		printf("%5.0d", nilai[indeks1]);
	}
	
}
