//WAP TO ROTATE AN ARRAY TO THE RIGHT BY K POSITION.
#include <stdio.h>

int main() {
    int n, k, i;

    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Temporary array to store rotated result
    int result[n];

    // Fill rotated positions
    for(i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
  return O;
}
