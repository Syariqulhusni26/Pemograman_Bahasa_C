#include<stdio.h> 
#include<conio.h>
#include<stdlib.h>

int main()
{
	
int hasil,a,b,x,y,z; 

printf("\t\t.'Faktorial'.\t\t\n\n"); 
printf ("Input nilai a: ");
scanf ("%d",&x);

printf("\n"); 
	if(x == 0)
	{
		printf("Nilai faktorial = 0\n");
	}
		else
		{
			hasil = x; y = x - 2;	
			for(a=y;a>=1;a--)
		{
			z = hasil;
			 for(b=a;b>=1;b--)
	{
		hasil = hasil + z;
	}
		}	
			if ( hasil == 0)
			printf("Nilai faktorial = 1\n\n");
			else	
			printf ("Nilai faktorial = %d\n\n",hasil);
		}	
		getch();
}
