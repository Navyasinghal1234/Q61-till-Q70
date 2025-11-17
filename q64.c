//WAP TO FIND DIGIT THAT OCCURS THE MOST LINES IN AN INTEGERS NUMBERS.
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 
    int digit, maxDigit = 0, i;

    scanf("%lld", &num);

    // Count digit frequencies
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for(i = 1; i < 10; i++) {
        if(freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
