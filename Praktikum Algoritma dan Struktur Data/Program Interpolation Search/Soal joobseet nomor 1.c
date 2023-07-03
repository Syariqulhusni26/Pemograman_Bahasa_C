#include <stdio.h>
main()

{
	int array[] = {30, 10, 40, 20, 50};
	int i, j, n = 5, temp;
	
	printf("Nilai array sebelum pengurutan : \n");
	for(i=0; i<n; i++){ 
		printf("%d ", array[i]);
	}
	
	//perulangan untuk membandingkan nilai array yang disebelah kanannya
		for(i=0; i<n; i++){
			temp = array[i];
			j = i-1;
			
			while(j>=0 && temp < array[j])
			{
				array[j+1] = array[j];
				j--;
			}
			array[j+1] = temp;
		}
		printf("\n nilai array setelah pengurutan menaik : \n");
		for(i=0; i<n; i++){
		printf("%d ", array[i]);
	}
}
