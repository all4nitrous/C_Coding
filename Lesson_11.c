#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age); // Function prototype


int main() {

    sayHi("Mike",40);
    sayHi("Tom", 23);
    sayHi("Oscar", 50);
    return 0;
}

void sayHi(char name[], int age) {

    printf("Hello %s, you are %d\n", name, age);

}
