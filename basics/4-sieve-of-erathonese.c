#include <stdio.h>

void sieve(int N) {
    int isPrime[N + 1];
    for(int i=0;i<N;i++){
        isPrime[i]=1;
    }
    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i * i <= N; ++i) {

        // Mark all the multiples of i as composite numbers
        if (isPrime[i] == 1) {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = 0;
        }
    }

    for(int i=0;i<N;i++){
        if(isPrime[i]) printf("%d ", i);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sieve(n);
    printf("\n");
    return 0;
}