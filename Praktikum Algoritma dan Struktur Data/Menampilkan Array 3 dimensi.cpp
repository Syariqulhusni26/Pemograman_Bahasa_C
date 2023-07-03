#include <stdio.h>
main()
{
	int a[2][4][3] = {{{1,2,3},{4,5,6},{7,8,9},{10,11,12}}, //Baris dan kolom pada array, pada dimensi pertama
	{{13,14,15},{16,17,18},{19,20,21},{22,23,24}}}; //Baris dan kolom pada array, pada dimensi kedua
	int i, j, k;
	
	// Perulangan jumlah array
	for(i=0; i<2;i++)
	{// perulangan Baris
		for(j=0; j<4; j++)
		{// perulangan Kolom
			for(k=0; k<3; k++)
		{
			printf("%d \t", a[i][j][k]);
		}
		printf("\n");
	}
}
	
}
