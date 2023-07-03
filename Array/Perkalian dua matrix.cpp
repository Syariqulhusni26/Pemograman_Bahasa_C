#include <stdio.h>

int main()
{
    int matriks1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int matriks2[4][4] = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };

    int hasil[4][4]; // matriks hasil perkalian

    // melakukan perkalian matriks
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    // menampilkan hasil perkalian matriks
    printf("Hasil perkalian matriks:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
