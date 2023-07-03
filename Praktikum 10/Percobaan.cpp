#include<stdio.h>
#include<conio.h>

int main()
{ 

int x, y;
float mean=0;
int total=0, nilai, maximum, minimum;
printf("\t\t.'Menerima Daftar Nilai Mahasiswa'.\t\t\n\n"); 
printf("masukan jumlah data = ");
scanf("%d", &x); 

for(y=1;y<=x;y++)
{
printf("jumlah data ke-%d= ", y);
 scanf("%d", &nilai);
if(y==1)
{
maximum=nilai;
 minimum=nilai;
}

total += nilai;
 if(nilai >= maximum)
 
maximum=nilai;

if(nilai <= minimum)
minimum=nilai;
}
printf("total nilai = %d\n", total);
 mean=(float)total;
  printf("mean = %.2f\n", mean);
   printf("nilai max = %d\n", maximum);
   printf("nilai min = %d\n", minimum);
getch();

}
	

	
