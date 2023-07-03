// Program linear search
#include <stdio.h>

main()
{
	int Array[] ={23,14,35,90,99,75,64,88,43,55};
	int search = 99;
	int a=0, b = 10;
	
	for(a=0; a<b;a++)
	{
		printf("Array[%d] = %d\n", a, Array[a]);
	}
	
	for(a=0; a<b; a++)
	{
		if(Array[a] == search)
		{
			printf("Nilai yang anda cari berada di indeks = %d",a);
			break;
			
		}
	}
}
