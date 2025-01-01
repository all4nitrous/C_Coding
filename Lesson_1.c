#include <stdio.h>
#include <stdlib.h>

void print_hello_world() {
    printf("Hello World!\n");
}

#ifndef TESTING
int main() {
    print_hello_world();
    return 0;
}
#endif