/* For Loops */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

int main() {

/*  int i = 1;  // same output but in the form of a while loop
    while(i <= 5){
        printf("%d\n", i);
        i++;
    } */
int i;
for(i = 0; i < 6; i++) {
    printf("%d\n", luckyNumbers[i]);
}

    return 0;
}