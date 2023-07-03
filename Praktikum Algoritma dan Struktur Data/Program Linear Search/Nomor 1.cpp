#include <stdio.h>

int main()
{
	int A[] = {20, 15, 22, 14, 12, 10, 24, 19, 18, 16};
	int search=10;
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
