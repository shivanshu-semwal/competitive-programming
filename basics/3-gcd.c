#include <stdio.h>

int gcd(int n, int m){
    if(m==0){
        return n;
    }
    else{
        return gcd(m, n%m);
    }
}

int main(){
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);
    printf("gcd is %d\n",gcd(n,m));
    return 0;
}