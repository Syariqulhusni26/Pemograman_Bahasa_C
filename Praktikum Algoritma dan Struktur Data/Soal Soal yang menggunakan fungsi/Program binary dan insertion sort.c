#include <stdio.h>
main()
{

	int array[] = {30, 10, 40, 20, 50};
	int indeks, j_sisa,temp;
	int search;
	int k, i=0, n=5;
	int j=n-1, a=0;
	system("color 0a");
	
	//algoritma insertion sort serta perulangan menampilkan nilai array sebelum di sorting
	printf("Nilai array sebelum pengurutan : \n");
	for(indeks=0; indeks<n; indeks++){ 
	printf("%d ", array[indeks]);
	
	}
	// perulangan untuk menyimpan nilai array sementara didalam var temp
	for(indeks=0; indeks<n; indeks++){
			temp = array[indeks];
			j_sisa = indeks-1;
			
			while(j_sisa>=0 && temp < array[j_sisa])
			{
				array[j_sisa+1] = array[j_sisa]; // adalah memindah nilai array
				j_sisa--; // proses perbandingan dan proses insert
			}
			array[j_sisa+1] = temp; // adalah rumus untuk memasukkan nilai
		}
		printf("\n nilai array setelah pengurutan menaik : \n");
		for(indeks=0; indeks<n; indeks++){
		printf("%d ", array[indeks]);
	}
	
	printf("\nMasukkan Nilai yang ingin dicari : ");
	scanf("%d", &search);
	for(a=0; a<n; a++)
	{
		k = (i+j)/2;
		if(array[k] == search)
		{
		printf("\nNilai yang dicari berada pada indeks : %d", k);
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
