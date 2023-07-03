#include <stdio.h>
#include <stdlib.h>
main()
{
 
 char status;
 beli:
 printf("\nBelajar Koding Bahasa C \n");
 printf("Masih mau lagi? (y/n) :");
 cetak:
printf("\n selesai");

 if(status=='y')
  goto beli; 
 else if (status=='n')
 	goto cetak;
else
  exit(0);
}