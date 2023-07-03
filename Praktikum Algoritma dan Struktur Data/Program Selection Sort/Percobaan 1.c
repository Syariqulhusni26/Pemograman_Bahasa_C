#include <stdio.h>
main()

{
	int array[] = {32,55,44,64,11,66,91,45,65};
	int indexmin, i, j, n=9, temp; // var j untuk mengulangi perbandingan nilai di sampingnya
	
	printf("Nilai array sebelum dirubah : \n");
	for(i=0; i<n; i++){
		printf("%d ", array[i]);
	}
	// perulangan untuk membandikan indeks minimum di setiap iterasinya
	printf("\nNilai array setelah dirubah : \n");
	for(i=0; i<n; i++) {
		indexmin = i;
		
		for(j=i+1; j<n; j++) {
			if(array[j] < array[indexmin]){
				indexmin = j;
			}
		}
		if(indexmin != i){
			temp = array[indexmin];
			array[indexmin] = array[i];
			array[i] = temp;
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", array[i]);
	}
	
}
