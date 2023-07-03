#include <stdio.h>
 long int faktorial(int a);

main()
{
	int b;
	printf("Masukkan Nilai : ");
	scanf("%d", &b);
	
	printf("\nHasil Faktorialnya adalah : %d", faktorial(b));

}

 long int faktorial(int x)

{
	int hasil = 1, z=x;
	
	while (z>0)
	{
		printf("%d",z);
		if (z>0)
		printf("*");
		hasil*=z;
		z--;		
	}	
	return hasil;	
}

