#include <stdio.h>

int main()

{
	char array[10];
	int i, countA;
	
	for ( i=0; i<10; i++)
	{
		printf("masukkan karakter : ", i);
		scanf("%c\n", &array[i]);
	}
	
	countA = 0 ;
		for (i=0; i<10; i++){
		
			printf("%3c\n", array[i]);
		if (array[i] == 'A')
	
		{
			countA++ ; 
		}
}
		printf("\n Banyaknya A adalah : %i", countA);
		return 0;
}