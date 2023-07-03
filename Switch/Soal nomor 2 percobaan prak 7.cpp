#include <stdio.h>
main()

{
	int valid_operator = 1;
	char operatore;
	float number1, number2, result;
	
		printf("Masukkan 2 buah bilangan & sebuah operator\n");
		
		printf("number1 operator number2\n\n");
		scanf("%f %c %f", &number1, &operatore, &number2);
	
	switch (operatore) 
	{
		case '*' : 
			printf("\n number1 * number2");
			break;
		case '/' :
			printf("\n number1 / number2");
			break;
		case '+' :
			printf("\n number1 + number2");
			break;
		case '-' :
			printf("\n number1 - number2");
			break;
		default:
			printf("valid_operator = 0");	
			
	}


}
