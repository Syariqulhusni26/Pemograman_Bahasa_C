#include <stdio.h>
int main()
{
	char huruf = 'y';
	int a = 0, b ;
	int c = 1 ;
	
			
	
	while (huruf == 'y' || huruf == 'Y' )
	{
		printf("Masukkan bilangan ke %d : ", c);
		scanf("%d", &a);
		c++;
		
		printf("Apakah ingin memasukkan data lagi (y/t): ");
		getchar();
		huruf = getchar();
		b+=a;
	}
	printf(" \n hasilnya adalah %d", b-1);
		
}
