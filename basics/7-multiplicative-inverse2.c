#include <stdio.h>

int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

int modInverse(int a, int m) {
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        printf("Inverse doesn't exist");
    else {
        // m is added to handle negative x
        // x is answer
        int res = (x % m + m) % m;
        return res;
    }
    return 0;
}
int main() {
    int a, x, m;
    printf("Enter the value of a,m: ");
    scanf("%d %d", &a, &m);
    x = modInverse(a, m);
    printf("x = %d", x);
    return 0;
}