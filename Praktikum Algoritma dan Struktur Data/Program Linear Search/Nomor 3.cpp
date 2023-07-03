#include <stdio.h>

int main()
{
	int A[] = {11,54,87,57,88,77,66,55,43,24};
	int search=11;
	int y, x = 10;
	
	for(y=0; y<10; y++)
	{
		printf("Nilai [%d]: %d \n", y, A[y]);
	}
	
	for(y=0; y<10; y++)
	{
		if(A[y] == search)
		{
			printf("Nilai yang anda cari berada di index: [%d]", y);
			break;
		}
	}
}
