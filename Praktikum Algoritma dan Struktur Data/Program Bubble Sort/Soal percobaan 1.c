#include <stdio.h>
main()
// Bubble sort Ascending
{
	int a[] = {10,98,33,42,55,66,78,24,87};
	int i, b = 0, n = 9, temp;
	
	for(i=0; i<=n-1; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	printf("Nilai array sebelum disortir : \n");
	for(i=0; i<=n-1; i++)
	{
		printf("%d \t",a[i]);
	}

	printf("\nNilai array sesudah disortir : \n");
	
	for(i=0; i<=n-1; i++)
	{
		for(b=0; b<n-i-1; b++)
		{
			if(a[b] > a[b+1])
			{
				temp = a[b];
				a[b] = a[b+1];
				a[b+1] = temp;
			}
		}
	}
	for(i=0; i<=n-1; i++)
	{
		printf("%d \t",a[i]);
	}
}
