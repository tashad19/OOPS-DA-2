#include <stdio.h>
#include <math.h>

int findSumDigits(int *x, int n);

int main(){

    int sum = 0, temp, n, i, x = 0;

    for (i = 1000; i < 9999; i++){
        if (i % 2 == 0){
            x += i;
        }
    }


    while (x / 10 != 0){
        temp = x;

        for (n = 0; temp != 0; n++){
            temp /= 10;
        }

        findSumDigits(&x, n);
    }

    printf("%d\n", x);

    if (x % 2 == 0){
        printf("Even Found");
    }
    else{
        printf("Odd Found");
    }

    return 0;
}

int findSumDigits(int *x, int n){
    int a = 0, i;

    // 2324/1000 = 2%10 = 2
    // 2324/100 = 23%10 = 3
    // 2324/10 = 232%10 = 2
    // 2324/1 = 2324%10 = 4

    for (i = 0; i < n; i++){
        a += (*x / (int)(pow(10, i)+1e-9)) % 10;
    }

    *x = a;

    return a;
}