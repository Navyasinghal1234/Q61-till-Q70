//WAP TO FIND SECOND LARGEST ELMENTS IN AN ARRAY.
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    int arr[n];

    // Read array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = -1e9;  // very small number

    // Find largest and second largest
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}
