#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 14, 21, 25, 26, 27};
    int n = 8;
    int x = 25;
    
    int l = 0;
    int h = n - 1;
    int pos = -1;
    
    while (l <= h && x >= arr[l] && x <= arr[h]) {
        pos = l + ((x - arr[l]) * (h - l)) / (arr[h] - arr[l]);
        
        if (arr[pos] == x) {
            break;
        }
        
        if (arr[pos] < x) {
            l = pos + 1;
        } else {
            h = pos - 1;
        }
    }
    
    if (pos == -1) {
        printf("Elemen %d tidak ditemukan dalam array\n", x);
    } else {
        printf("Nilai %d ditemukan pada index %d\n", x, pos);
    }
}
