#include <stdio.h>

void print_hello_world(void) {
    printf("Hello World!\n");
}

#ifndef TESTING
int main(void) {  // Corrected to lowercase "main"
    print_hello_world();
    return 0;
}
#endif


