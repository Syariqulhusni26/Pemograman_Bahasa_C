#include <stdio.h>
main()

{
	int abc;
	
		printf("=====----====== Nilai Ujian =====-----====== \n");
		printf("masukkan nilai : ");
		scanf("%d", &abc);
		
		if( abc >= 81 && abc <= 100)
			printf("\n anda mendapat nilai A  ", abc);
		else if ( abc >= 70 && abc <=80)
			printf ("\n Anda mendapat nilai B ", abc);
		 else if ( abc >= 60 && abc <=71)
			printf ("\n Anda mendapat nilai C ", abc);
		else if ( abc >= 50 && abc <=61)
			printf ("\n Anda  mendapat nilai D ", abc);
		else 
			printf("\n Anda mendapat nilai E");
		
}