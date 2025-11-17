//WAP TO INSERT AN ELMENT IN AN ARRAY AT A GIVEN POSTIOIN.
#include <stdio.h>

int main() {
    int n, i, pos, value;

    scanf("%d", &n);
    int arr[n + 1];    // +1 for new element

    // Read array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and value
    scanf("%d %d", &pos, &value);
    
  
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value at given position
    arr[pos] = value;

    // Print updated array
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
