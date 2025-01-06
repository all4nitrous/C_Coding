/* Pointers & dereferencing them */
#include <stdio.h>
#include <stdlib.h>

int age = 30;
double gpa = 3.4;
char grade = 'A';
int * pAge = &age;
double * pGpa = &gpa;
char * aGrade = &grade;

int main() {
    printf("age: %d\n", *&*&age);
}