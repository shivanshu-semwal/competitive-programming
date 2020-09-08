#include <stdio.h>

// This function multiplies x with the number represented by res[].
// res_size is size of res[] or number of digits in the number represented by res[]. 
// This function uses simple school mathematics for multiplication.
// This function may value of res_size and returns the new value of res_size
int multiply(int x, int res[], int res_size) {
    int carry = 0; // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    // Put carry in res and increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main() {
    // take  a character array in the
    int a[100] = {0};
    int n;
    printf("Enter a number:: ");
    scanf("%d", &n);
    int n2 = n;
    int count = 0;
    while (n > 0) {
        a[count] = (n % 10);
        n /= 10;
        count++;
    }
    //count--;
    // now multiply
    for (int i = 1; i < n2; i++) {
        count = multiply(i, a, count);
    }

    // now print the factorial
    for(int j=count-1;j>=0;j--){
        printf("%d",a[j]);
    }
    printf("\n");
    return 0;
}