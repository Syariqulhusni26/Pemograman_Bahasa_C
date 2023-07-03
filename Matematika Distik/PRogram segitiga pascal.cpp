#include <stdio.h>

long faktorial(int n)
{
	long z = 1;
	int i = 1;
	
	while(i<=n) 
	{
		z = z*i;
		i++;
		
	}
	return z;
}

int main()
{
	int a, i, j;
	
	printf("Masukkan Angka : ");
	scanf("%d", &a);
	
	for(i=0 ; i<a; i++)
	{
		for(j=0; j<a-i-1; j++)
		{
			printf(" ");
		}
		
		for(j=0; j<=i; j++)
		{
			printf("%1d ", faktorial(i) / (faktorial(j) * faktorial(i - j)));
		}
		printf("\n");
	}
	return 0;
}