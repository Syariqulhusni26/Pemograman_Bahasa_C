#include <stdio.h>
int show_value(int x);
int search_binary(int x);
main()

{
	int a; 
	show_value(a);
	search_binary(a);
}

int show_value (int x)
{
	int array[] = {11,22,33,44,55,66,77,88,99,100};
	int k,i=0,n=10;
	int j=n-1,a;
	
	puts("Elemen array ");
	for(a=0; a<n; a++)
	{
		printf("array[%d] = %d \n", a, array[a]);
	}
}

int search_binary(int x)
{
int array[] = {11,22,33,44,55,66,77,88,99,100}; 
	int search = 33;
	int k,i=0,n=10;
	int j=n-1,a;
	
	printf("Data yang dicari adalah : %d\n",search);
	for(a=0; a<n; a++)
	{
		k = (i+j)/2; // rumus untuk mencari nilai tengah
		if(array[k]==search){ // membandingkan hasil dengan nilai yang dicari
			printf("nilai ditemukan pada index %d",k);
			break;
		}
		if(array[k]<search){ // jika indeks array nilainya lebih kecil dari nilai dicari
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

