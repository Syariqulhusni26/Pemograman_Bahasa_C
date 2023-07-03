#include <stdio.h>
#include <stdlib.h>

/*Resistor Pengganti. Modul Praktikum Poltek. hal 27*/

int main()
{   int iPilihan;
    float fR1, fR2, fR3;
    float fResPengganti;
    
    printf("Menghitung Resistor Pengganti");
    printf("\n\nMasukkan Nilai R1: ");
    scanf("%f",&fR1);
    printf("\nMasukkan Nilai R2: ");
    scanf("%f",&fR2);    
    printf("\nMasukkan Nilai R3: ");
    scanf("%f",&fR3);
    
    printf(" \n\nPenyusunan Resistor: ");
    printf("\n 1.Seri");
    printf("\n 2.Paralel");
    printf("\nMasukkan pilihan penyusunan (1 atau 2): ");
    scanf("%d",&iPilihan);

    switch (iPilihan)
    { case 1:
             fResPengganti = fR1+ fR2+ fR3;
             break;
      case 2:             
             fResPengganti =  (1.0/fR1)+ (1.0/fR2)+ (1.0/fR3);
             fResPengganti = 1.0/fResPengganti;
             break;
      default:
              printf("inputan salah");
    }
    
      printf("\n\nBesar resistor pengganti adalah : %.2f \n", fResPengganti);
    
      system("PAUSE");
      return 0;
}

