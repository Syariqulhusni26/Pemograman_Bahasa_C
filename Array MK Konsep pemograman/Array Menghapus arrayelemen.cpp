#include <stdio.h>
main()

{
	int array[6];
	int a = 0, b, c, indeks, panjang;
	char status;
	
	benar :
	printf("Masukkan jumlah pada elemen array : ");
	scanf("%d", &b);
	
	
	for (a=0; a<b ; a++)
	{
		printf("Masukkan Elemen Array pada elemen ke %d : ",a+1);
		scanf("%d",&array[a]);
	}
	
	printf("Elemen array yang di inputkan adalah : \n");
	
	for (a=0; a<b ; a++)
	{
		printf("array[%d] = %d\n", a, array[a]);
	}
	
	printf("\nMasukkan indek dari elemen yang ingin didelete : ");
	scanf("%d", &indeks);
	
	c = 2;
	while (c < b)
	{
		array[c-1] = array[c];
		c = c + 1;
	}
	b = b-1;

	printf("Elemen Array setelah proses delete adalah : \n");
	
	for (a = 0; a <b ; a++)
	{
		printf("array[%d] = %d \n", a, array[a]);
	}
}


