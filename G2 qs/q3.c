#include <stdio.h>
#include <string.h>

int main(){
    char matrix[3][3], diag[6], ans[] = "aeiceg";
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf(" %c", &matrix[i][j]);
        }
    }

    for(i=0; i<3; i++){
        diag[i] = matrix[i][i];   
    }
    for(i=0; i<3; i++){
        diag[i+3] = matrix[i][2-i];
    }
    diag[6] = '\0';

    if(strcmp(ans, diag)==0){
        printf("Correct password!");
    }
    else{
        printf("Wrong password!");
    }
}
