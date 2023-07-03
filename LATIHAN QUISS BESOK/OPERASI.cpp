#include <stdio.h>
main()

{
	int valid_operation = 1;
	char operatore;
	int var1,var2,hasil; 
	
	printf("Masukkan 2 bilangan dan sebuah operator\n ");
	printf("Dengan format var1 operator var2\n ");
	scanf("%d %c %d", &var1, &operatore, &var2);
	
	if(operatore == '*')
		printf("%d\n", var1 * var2);
	else if (operatore == '/')
		printf("%d\n", var1 / var2); 
	else if (operatore == '+')
		printf("%d\n", var1 + var2);
	else if (operatore == '-')
		printf("%d\n", var1 - var2);	
	else valid_operation = 0;
	
	if (valid_operation)
	printf("%d %c %d adalah %d\n", var1,operatore,  var2, hasil );
	else
		printf("invalid_operation \n");
}
