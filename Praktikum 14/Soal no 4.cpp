#include <stdio.h>
#include <math.h>
#define PHI 3.142857f;

float cariBC(float sudutBAC,float sisiAB);
float radian(float);

main()
{
	float sudutBAC, sisiAB, sisiBC;
	
	printf("masukkan nilai sudut BAC untuk ukuran derajat : ");
	scanf("%f", &sudutBAC);
	
	printf("Masukkan panjang sisi AB untuk ukuran meter : ");
	scanf("%f", &sisiAB);
	
	sisiBC = cariBC(sudutBAC,sisiAB);
	printf(" \npanjang sisi AB adalah %.2f meter", sisiBC);

}

float cariBC(float sudutBAC,float sisiAB)
{
	int hasil;
	hasil =tan(radian(sudutBAC)) * sisiAB;
	return hasil;
}

float radian(float derajat)
{
	int hasil;
	hasil = (derajat / 180.0f) * PHI;
	return hasil;
	
}
