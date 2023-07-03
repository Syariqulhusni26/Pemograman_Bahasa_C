#include <stdio.h>
#include <stdlib.h>

/*Tulis procgram untuk menentukan lama bekerja seorang pegawai, jika jam masuk dan jam pulang diinput. 
Catatan: jam berupa angka 1-12, dan seorang pegawai bekerja kurang dari 12 jam.
asumsi jam yang dimasukkan adalah tepat (tidak memasukkan menit)
*/

int main()
{   int iMasuk, iKeluar, iLama;
    
    printf("Menentukan lama bekerja\n\n");
    printf(" Jam Masuk : ");
    scanf("%d",&iMasuk);

    printf(" \nJam Keluar : ");
    scanf("%d",&iKeluar);

    
    if (iKeluar >= iMasuk)
          iLama = iKeluar - iMasuk;                                      
    else 
          iLama = (12-iMasuk) + iKeluar;                   
    
    printf("\n\n Lama bekerja adalah : %d Jam\n", iLama);

      system("PAUSE");
      return 0;
}

