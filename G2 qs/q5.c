#include <stdio.h>
#include <stdlib.h>

int x = 5;  // say

float power(int x, int n);

int main(){
    int n;
    scanf("%d", &n);

    if(n>=0){
        printf("%f", power(x, n));
    }
    else{
        printf("%f", 1./power(x, n));
    }

    return 0;
}

float power(int x, int n){
    if(n==0){
        return 1;
    }

    return x*power(x, abs(n)-1);
}