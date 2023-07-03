#include <stdio.h>
#define max 8

int a[8] = {3, 2, 8, 1, 4, 9, 7, 6};

// Fungsi untuk menukar elemen pada indeks ke-i dan ke-j dalam array
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Fungsi untuk memilih pivot sebagai elemen terakhir dan mengatur elemen-elemen yang lebih kecil daripadanya ke sebelah kiri dan yang lebih besar ke sebelah kanan
int partition(int Nrendah, int Ntinggi)
{
    int pivot = a[Ntinggi];
    int i = Nrendah - 1;

    for (int j = Nrendah; j < Ntinggi; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[Ntinggi]);
    return (i + 1);
}

// Fungsi Quick Sort untuk mengurutkan array
void quickSort(int Nrendah, int Ntinggi)
{
    if (Nrendah < Ntinggi)
    {
        int pivotIndex = partition(Nrendah, Ntinggi);

        quickSort(Nrendah, pivotIndex - 1);
        quickSort(pivotIndex + 1, Ntinggi);
    }
}

int main()
{
    int i;

    printf("Nilai array sebelum pengurutan\n");
    for (i = 0; i < max; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    quickSort(0, max - 1);

    printf("\nNilai array sesudah pengurutan\n");

    for (i = 0; i < max; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
