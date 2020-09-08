#include <stdio.h>

// Returns modulo inverse of a with respect to m using extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e., gcd(a, m) = 1

int modInverse(int a, int m) {
    int m0 = m;       // making a copy of the m

    if (m == 1)       // special case
        return 0;

    int y = 0, x = 1; // s and old_s
    
    while (a > 1) {
        // quotient = old_r / r
        int q = a / m;

        // (old_r , r) = (r , old_r - quotient * r)
        int temp = m;
        m = a % m;
        a = temp;

        // (old_s , s) = (s, old_s - quotient * s)
        temp = y;
        y = x - q * y;
        x = temp;
    }

    // Make x positive
    if (x < 0)
        x += m0;
    return x;
}

// Driver program to test above function
int main() {
    int a = 3, m = 11;
    printf("Modular multiplicative inverse is %d\n", modInverse(a, m));
    return 0;
}
