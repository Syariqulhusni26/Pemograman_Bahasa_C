#include <stdio.h>

int main()

{
	char countA, array[10];
	int i;
	
	for ( i=0; i<10; i++)
	{
		printf("masukkan karakter : ", i);
		scanf("%c\n", &array[i]);
	}
	
	countA = 0 ;
		for (i=1; i<10; i++){
		
			printf("%c\n", array[i]);
	}
		if (array[i] = 'A')
		{
			countA++ ; 
		}
		printf(" Banyaknya A adalah : %c\n", countA);
		return 0;
}