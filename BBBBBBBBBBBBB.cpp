#include <stdio.h>
#include <stdlib.h>
main(){
 char status;
 cetak:
 printf("\nabangkoding.blogspot.com\n");
 printf("tampilkan lagi? (y/n) :");
 status = getchar();
 
 if((status)=='Y')
  goto cetak; 
 else
  exit(0);
}