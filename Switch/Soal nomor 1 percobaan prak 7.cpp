#include <stdio.h>
main()

{
	char letter;
		
		printf(" Masukkan huruf : ");
		scanf("%c", &letter);
		
	switch (letter)
	{
		case 'x' :
			printf("sum = 0");
			break;
		case 'z' :
			printf("valid_flag = 1");
			break;
		case 'a':
			printf("sum = 1");
			break;
		default:
			printf("unknown letter ");
							
	}
}