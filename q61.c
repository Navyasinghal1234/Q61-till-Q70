//WAP TO SEARCH AN ELEMENT IN AN ARRAY USING LINEAR SEARCH.
#include <stdio.h>

int main() {
    int n, i, key, index = -1;

    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;   // store index
            break;       // stop searching
        }
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
