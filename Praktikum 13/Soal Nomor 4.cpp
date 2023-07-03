#include <stdio.h>
float radian (float derajat);

main()
{
	float nilai;
	printf("Masukkan nilai : ");
	scanf("%f", &nilai);
	
	printf("hasil konversinya adalah : %f", radian(nilai));


}

 float radian(float derajat)
{
	float hasil;
	
	hasil = derajat/180.0f*3.14159f;
	
	return hasil;
}

