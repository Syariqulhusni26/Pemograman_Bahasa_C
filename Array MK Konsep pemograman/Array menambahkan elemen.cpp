#include <stdio.h>
#include <stdlib.h>
main()

{
	int array[6];
	int a = 0, b, c, indeks, masukan, panjang;
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
	
	printf("\nMasukkan indek yang ingin disisipi nilai baru : ");
	scanf("%d", &indeks);
	printf("\nMasukkan nilai baru yang ingin disisipi : ");
	scanf("%d", &masukan);
	
	panjang = b+1;
	while (b >= indeks)
	{
		array[b+1] = array[b];
		b = b - 1;
	}
	array[indeks] = masukan;
	
	printf("Elemen Array setelah disisipi adalah : \n");
	
	for (a = 0; a <panjang ; a++)
	{
		printf("array[%d] = %d \n", a, array[a]);
	}
	
	printf("\n ingin mencoba lagi (Pilih y/n)..");
	status = getchar() ;
	scanf("%c", &status);
		if( status=='y')
		goto benar;
	else 
		printf("\n Trimakasih anda telah mencoba program ini");
		
	
}  
