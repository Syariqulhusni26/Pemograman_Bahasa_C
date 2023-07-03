#include <stdio.h>

int main()
{
	int a[5] = {1,3,5,7,8};
	int search=5;
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("Nilai [%d]: %d \n", i, a[i]);
	}
	
	for(i=0; i<a; i++)
	{
		if(a[i] == search)
		{
			printf("Nilai yang anda cari berada di index: [%d]", i);
			break;
		}
	}
}
