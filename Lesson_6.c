#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num = 5; //If you add const, it'll give an error as there are two num's
    printf("%d\n", num);
    num = 8;
    printf("%d\n", num);
    const char MESSAGE[] = "Hello"; //const' written in CAPS
    printf("%s\n", MESSAGE);


    return 0;
}