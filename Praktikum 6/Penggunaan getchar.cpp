#include <stdio.h>
#include <iostream>

main (void)
{  //inisial variabel
   int g;
   float phi;
   char a;
   
   //penginputan dengan beberapa operasi
   
   printf ("Masukan sebuah karakter : ");
   a = getchar();
   getchar();
   puts ("Masukan sembarang nilai ");
   printf ("Nilai sembarang = ");
   scanf ("%d",&g);
   printf ("Masukan nilai phi = ");
   scanf ("%f",&phi);
   
   //menampilkan hasil
   
   getchar();
   printf("\nNilai sembarang adalah %d\n",g);
   printf ("\nNilai phi yang dimasukan %3.2f\n",phi);
   printf ("\nCharakter yang dimasukan %c",a);
}