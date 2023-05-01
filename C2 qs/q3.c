#include <stdio.h>

int sum;

int calcSum(int n);
int fact(int n);

int main(){
    int n;
    scanf("%d", &n);
    calcSum(n);
    printf("%d", sum);

    return 0;
}

int calcSum(int n){
    if (n==1){
        return 1;
    }
    sum = fact(n)/n + calcSum(n-1);
}

int fact(int n){
    if (n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}