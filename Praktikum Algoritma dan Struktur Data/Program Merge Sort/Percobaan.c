#include <stdio.h>

// Merge Function
void merge(int array[], int tempArray[], int start, int middle, int end) {
    int i = start, j = middle+1, k = start;

    while (i <= middle && j <= end) {
        if (array[i] <= array[j]) {
            tempArray[k] = array[i];
            i++;
        } else {
            tempArray[k] = array[j];
            j++;
        }
        k++;
    }

    while (i <= middle) {
        tempArray[k] = array[i];
        i++, k++;
    }

    while (j <= end) {
        tempArray[k] = array[j];
        j++, k++;
    }

    for (i = start; i <= end; i++) {
        array[i] = tempArray[i];
    }
}

// Merge Sort Function
void mergeSort(int array[], int tempArray[], int start, int end) {
    if (start < end) {
        int middle = (start+end)/2;
        mergeSort(array, tempArray, start, middle);
        mergeSort(array, tempArray, middle+1, end);
        merge(array, tempArray, start, middle, end);
    }
}

int main() {
    int array[100], tempArray[100], size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements in the array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    mergeSort(array, tempArray, 0, size-1);
    
    printf("Sorted array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}

