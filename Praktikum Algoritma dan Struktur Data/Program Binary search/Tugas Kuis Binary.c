//program quis binary search
#include <stdio.h>

main()
{
	int array[] = {40,60,30,50,10,20};
	int x, y = 0, temp;
	int search;
	int k, i=0, n=6;
	int j=n-1, a=0;
	
	printf("Elemen array sebelum di sorting : \n");
	
	for(x=0; x<n-1; x++){
		printf("%d \t", array[x]);
	}
	//program bubble sort
	printf("\nElemen array sesudah di sorting : \n");
	for(x=0; x<n-1; x++)
	{
		for(y=0; y<n-x-1; y++){
			if(array[y] > array[y+1]){
			temp = array[y];
			array[y] = array[y+1];
			array[y+1] = temp;
			}
		}
	}
	for(x=0; x<n-1; x++){
		printf("%d \t", array[x]);
	}
	printf("\nMasukkan Nilai yang  ingin dicari : ");
	scanf("%d", &search);
	for(a=0; a<n; a++)
	{
		k = (i+j)/2;
		if(array[k] == search)
		{
		printf("\nNilai yang dicari berada pada indeks : %d\n", k);
		printf("\nData ditemukan\n");
		break;
		}
		if(array[k]<search)
		{
			i=k+1;
		}
		else
		{
			j=k-1;
		}
	}
	if(a==n)
	{
	printf("maaf nilai tidak ditemukan");
 	}
}