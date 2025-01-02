#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num) {
    double result = num * num * num;
    return result;
}

int main() {

    printf("Answer: %f\n", cube(3.0));

    return 0;
}