#include <stdio.h>
main()

{
	int i, min;
	int array[10];
	
	// mencari nilai minimum
	min = array[0];
		for(i = 1; i<10; i++)
		{
			if(array[i] <min){
				min=array[i];
			}
		}
			printf("nilai minimum : %d\n", min);
			
}