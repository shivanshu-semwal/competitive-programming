#include <stdio.h>

int inverse(int a, int m) {
    a %= m;
    for (int i = 1; i < m; i++) {
        if ((a * i) % m == 1) {
            return i;
        }
    }
    return 0;
}

int main() {
    int a, x, m;
    printf("Enter the value of a,m: ");
    scanf("%d %d", &a, &m);
    x = inverse(a, m);
    printf("x = %d\n", x);
    return 0;
}