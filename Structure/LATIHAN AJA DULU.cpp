#include <stdio.h>
main()

{
	struct Mahasiswa
	{	int NIM;
		char Nama[30];
		float nilai;
	};
	
	struct Mahasiswa S1 ={29,"Syariqul Husni", 3.7};
	struct Mahasiswa S2;
	printf("Masukkan : NIM, Nama, nilai : ");
	scanf("%d %s %f", &S2.NIM, &S2.Nama, &S2.nilai);
	printf("NIM = %d\nNama : %s\nNilai : %f\n", S1.NIM, S1.Nama, S1.nilai);
	printf("\nDatanya adalah : NIM = %d\nNama : %s\nNilai : %f\n", S2.NIM, S2.Nama, S2.nilai);
	
}
