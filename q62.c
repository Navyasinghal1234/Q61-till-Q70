//WAP  TO REVERSE AN ARRAY WITHOUT TAKING EXTRA SPACE.
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array without extra space
    int start = 0, end = n - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
