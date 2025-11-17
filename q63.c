//WAP TO MERGE TWO ARRAY.
#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Read size of first array
    scanf("%d", &n1);
    int arr1[n1];

    // Read elements of first array
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read size of second array
    scanf("%d", &n2);
    int arr2[n2];

    // Read elements of second array
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array size
    int merged[n1 + n2];

    // Copy arr1 into merged
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 into merged
    for(j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    // Print merged array
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
