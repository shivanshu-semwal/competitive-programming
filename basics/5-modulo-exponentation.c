#include <stdio.h>

// calculating (a^b)%m
long long int expo(long long int a, long long int b, long long int m) {
    if (b == 0)
        return 1;

    long long int p = expo(a, b / 2, m) % m;
    p = (p * p) % m;

    // if b is even then return p
    // else multiply by a one more time
    return (b % 2 == 0) ? p : (a * p) % m;
}

int main() {
    int a,b,m;
    printf("Enter a and b and m: ");
    scanf("%d %d %d", &a, &b, &m);
    printf("a^b\%m = %d\n",(int) expo(a,b,m));

    return 0;
}