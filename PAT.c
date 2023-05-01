// Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.

// Input:

// 11

// Output:

// 11 is prime number
// 11 is not a armstrong number
// 11 is not a perfect number

#include <stdio.h>
#include <math.h>

int prime(int num);
int armstrong(int num, int nd);
int perfect(int num);

int main(){
    int num;
    scanf("%d", &num);

    int noOfDigits = 0, temp = num;

    while (temp > 0){
        noOfDigits += 1;
        temp /= 10;
    }

    if(prime(num)){
        printf("It is a prime number\n");
    }
    else{
        printf("It is not a prime number\n");
    }

    if (armstrong(num, noOfDigits)){
        printf("It is an armstrong number\n");
    }
    else{
        printf("It is not an armstrong number\n");
    }

    if(perfect(num)){
        printf("It is a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }

    return 0;
}

int prime(int num){

    for (int i=2; i<=num/2; i++){
        if(num%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int armstrong(int num, int nd){
    int digit, temp, sum = 0;

    temp = num;
    while (temp > 0){
        digit = temp%10;
        sum += (pow(digit, nd) + 1e-9);  // bcoz pow function sometimes gives small error in answer
        temp = temp/10;
    }

    if(num == sum){
        return 1;
    }
    else{
        return 0;
    }
}

int perfect(int num){
    int sum = 0;

    for (int i=1; i<=num/2; i++){
        if(num%i==0){
            sum += i;
        }
    }
    if(sum == num){
        return 1;
    }
    else{
        return 0;
    }
}