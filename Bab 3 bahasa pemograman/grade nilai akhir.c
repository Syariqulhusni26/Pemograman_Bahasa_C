#include <stdio.h>
main()
{
	float tugas,quiz,mid,uas,na;
	
	printf("masukkan nilai tugas anda = ");
	scanf("%f", &tugas);
	
	printf("masukkan nilai quiz anda = ");
	scanf("%f", &quiz);
	
	printf("masukkan nilai mid test anda = ");
	scanf("%f", &mid);
	
	printf("masukkan nilai uas anda = ");
	scanf("%f", &uas);
	
	na = tugas*0.1+quiz*0.2+mid*0.3+uas*0.4;
	
	if (na>=85)
	
	printf("grade kamu adalah A", na);
	else if (na>=75&&na<85)
	printf("grade kamu adalah AB", na);
	else if (na>=60&&na<75)
	printf("grade kamu adalah B", na);
	else if (na>=60&&na<65)
	printf("grade kamu adalah C", na);
	else if (na>55&&na<60)
	printf("grade kamu adalah D", na);
	else 
	printf("grade kamu adalah E", na);	
	
}