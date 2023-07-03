#include <stdio.h>
#define max 8

int a[8] = {3,2,8,1,4,9,7,6};
int b[8];

//program merge untuk memecah nilai array menjadi sub - sub bagian
void megre(int Nrendah, int Ntengah, int Ntinggi)
{
	int l1, l2, i;
	
	l1 = Nrendah;
	l2 = Ntengah + 1;
	i = Nrendah;
	
	for( i = Nrendah; l1 <= Ntengah && l2 <= Ntinggi; i++){
		if(a[l1] >= a[l2])
			b[i] = a[l1++];
		else
			b[i] = a[l2++];
	}
	
	while (l1 <= Ntengah)
		b[i++] = a[l1++];
		
	while (l2 <= Ntinggi)
		b[i++] = a[l2++];
		
	for(i = Nrendah; i <= Ntinggi; i++)
		a[i] = b[i];
		
}

//program untuk pengurutan nilai array

void sort(int Nrendah, int Ntinggi) 
{
	int Ntengah;
	
	if (Nrendah < Ntinggi){	
	Ntengah = (Nrendah + Ntinggi) /2;
	
	sort(Nrendah, Ntengah);
	sort(Ntengah+1, Ntinggi);
	megre(Nrendah, Ntengah, Ntinggi);
	
	} else {
		return;
	}
}

main()
{
	
	int i;

	printf("Nilai array sebelum pengurutan\n");
	for(i = 0; i<max; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	sort(0, max);
	
	printf("\nNilai array sesudah pengurutan\n");
	
	for(i = 0; i<max; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	
}
