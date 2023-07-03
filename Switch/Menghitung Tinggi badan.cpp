#include <stdio.h>
main()

{
	char jeniskelamin;
	int tinggibadan;
	
	printf(" Masukkan jenis kelamin : ");
	scanf("%c", &jeniskelamin);
	printf(" Masukkan tinggi badan : ");
	scanf("%d", &tinggibadan);
	
	if ( jeniskelamin == 'l')
		if (tinggibadan >= 160)
			printf(" Selamat kamu lulus!");
		else
			printf(" Kamu belum lulus");
	else if ( jeniskelamin == 'p')
		if (tinggibadan >= 155)
			printf("Selamat kamu lulus! ");
		else
			printf(" Kamu belum lulus");
			
}