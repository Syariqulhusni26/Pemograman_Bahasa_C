#include <stdio.h>
main()
{
	int array[] = {70,68,67,45,25,23,17,15,14,12,}; 
	int search =14;
	int k,i=0,n=10;
	int j=n-1,a;
	
	puts("Elemen array ");
	// menampilkan nilai array pada program
	for(a=0; a<n; a++)
	{
		printf("array[%d] = %d \n", a, array[a]);
	}
	printf("Data yang dicari adalah : %d\n",search);
	// perulangan for untuk menentukan nilai tengah
	for(a=0; a<n; a++)
	{
		k = (i+j)/2; // rumus untuk mencari nilai tengah
		if(array[k]==search){ // membandingkan hasil dengan nilai yang dicari
			printf("nilai ditemukan pada index %d",k);
			break;
		}
		if(array[k]>search){ // jika indeks array nilainya lebih kecil dari nilai dicari
			i=k+1;			 // maka indeks awal, nilai tengahnya ditambah satu	
		}
		else{		// jika indeks array nilainya lebih besar dari nilai dicari
			j=k-1;  // maka indeks akhirnya, nilai tengahnya dikurang satu
		}
	}
	if(a==n){
		printf("maaf nilai tidak ditemukan");
	}
	
}
