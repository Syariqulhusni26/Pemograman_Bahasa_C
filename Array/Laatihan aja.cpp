#include <stdio.h>

int main()

{
	int array [5];
	
	for (int masukkan=0; masukkan<5; masukkan++){
			printf("inputkan bilangan = ", masukkan);
			scanf("%d", &array[masukkan]);
	}
		
	printf("\n data array yang dimasuukan adalah \n");
	for (int i=0; i<5; i++){
		printf("%d\n", array[i]);
	}
}	

