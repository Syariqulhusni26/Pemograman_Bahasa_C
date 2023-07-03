#include<stdio.h>
void menampilkan (int A[], int n);
void selection_sort (int A[], int n);
main()
{
	int A[]={3,4,2,1,7,5,9,6,8,10};
	int n=10, j;
	
	menampilkan (A,n);
	
	selection_sort (A,n);
}

//fungsi menampilkan nilai array
void menampilkan (int A[], int n)
{
	int i;
	
	printf("Nilai array sebelum pengurutan: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
}

//fungsi pengurutan array menggunakan metode selection sort
void selection_sort (int A[], int n)
{
int i, temp, indeks, q; 
	
	for (i=0; i<n; i++)
	{
		temp = A[i]; 
		indeks = i;
		
		for(q=i+1; q<n; q++)
		{
			if(A[q] < temp)
			{
				temp = A[q];
				indeks = q;
			}
		}
		A[indeks] = A[i];
		A[i] = temp;
	}
		
	//menampilkan nilai array sesudah pengurutan
	printf("\nNilai array sesudah pengurutan: ");
	for (i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
}
