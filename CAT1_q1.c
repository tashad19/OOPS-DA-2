#include <stdio.h>
#include <string.h>

// Write a C program that accepts a string as input, print the length of the string and display the word fequency, then use pointers to find the first repeated and non-repeated character in the string, and print the output:

// POSSIBLE TEST CASES:

// INPUT:

// SUJITHRA

// OUTPUT:

// Length of the string is: 8
// Word frequency is: 8
// No repeated characters found in the string.
// First non-repeated character is: S

// #2 INPUT:

// ASSDFG

// OUTPUT:

// Length of the string is: 6
// Word frequency is: 5
// First repeated character is: S
// First non-repeated character is: A

 

// #3 INPUT:

// RUDRESH

// OUTPUT:

// Length of the string is: 7
// Word frequency is: 6
// First repeated character is: R
// First non-repeated character is: U


void func(int *f, char *s, int n);

int main() {
    char s[50];
    int i, j, n;

    scanf("%s", s);
    n = strlen(s);

    int fre[n], word_fre = n;

    for(i=0; i<n; i++){
        fre[i] = 1;
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(s[i] == s[j] && fre[i]!=0){
                fre[i] += 1;
                fre[j] = 0;
                word_fre -= 1;
            }
        }
    }

    printf("Length of the string is: %d\n", n);
    printf("Word frequency is: %d\n", word_fre);

    func(fre, s, n);

    return 0;
}

void func(int *f, char *s, int n){
    int i, count, found = 0;
    char repeated, non_repeated;

    for (i=0; i<n; i++){
        if(*(f+i) > 1){
            printf("First repeated character: %c\n", *(s+i));
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("No repeated characters found in the string.\n");
    }

    for (i=0; i<n; i++){
        if(*(f+i) == 1){
            printf("First non-repeated character: %c\n", *(s+i));
            break;
        }
    }

}