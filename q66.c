//WAP TO INSERT AN ELEMENTS IN A STORED ARRAY AT THE APPROPRIATE POSITION.
#include <stdio.h>

int main() {
    int n, i, key;

    scanf("%d", &n);
    int arr[n+1];   // +1 space for new element

    // Read sorted array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    scanf("%d", &key);

    int pos = n;  // assume element goes at end

    // Find position to insert
    for(i = 0; i < n; i++) {
        if(key < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to make space
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = key;

    // Print updated array
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
