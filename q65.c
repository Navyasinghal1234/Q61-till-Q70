//WAP TO SEARCH IN A STORED ARRAY USING BINARY SEARCH.
#include <stdio.h>

int main() {
    int n, key, i;
    scanf("%d", &n);

    int arr[n];
    // Read sorted array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to search
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, index = -1;

    // Binary search
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            index = mid;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
