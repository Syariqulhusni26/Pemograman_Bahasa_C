#include <stdio.h>
main()

{
	struct Mahasiswa
	{	int NIM;
		char Nama[30];
		float nilai;
	};
	
	
	struct Mahasiswa S2;
	printf("Masukkan : NIM, Nama, nilai : ");
	scanf("%d %s %f", &S2.NIM, &S2.Nama, &S2.nilai);
	
	printf("\nDatanya adalah : NIM = %d\nNama : %s\nNilai : %f\n", S2.NIM, S2.Nama, S2.nilai);
	
}
