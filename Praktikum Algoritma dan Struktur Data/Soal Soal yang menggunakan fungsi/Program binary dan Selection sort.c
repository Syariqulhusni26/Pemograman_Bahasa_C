#include <stdio.h>
void display(int array[]);
main()
{
	int array[] = {32,55,44,64,11,66,91,45,65};
	int x;
	x= array[display(x)];
	
}

void display(int array[])
{
	int i, j, n = 5, temp;
	
	printf("Nilai array sebelum dirubah : \n");
	for(i=0; i<n; i++){
		printf("%d ", array[i]);
	}
}
