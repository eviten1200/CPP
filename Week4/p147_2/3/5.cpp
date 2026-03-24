#include <stdio.h>
#include "test.h"

int reverse(int n) {
    int res = 0;
    while (n > 0) {
        res = res * 10 + (n % 10);
        n /= 10;
    }
    return res;
}

void main() {
    int input;
    scanf("%d", &input);
    printf("%d\n", reverse(input));
}