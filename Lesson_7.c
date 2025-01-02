#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("Enter your age: ");
    scanf("%d", &age); //Area for input
    printf("you are %d years old\n\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); //lf for decimal numbers
    printf("Your gpa is %f\n\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Your grade is %c\n\n", grade);

    char name[20];
    printf("What is your name: ");
    fgets(name, 20, stdin); //Allows you to use strings with spaces; stdin = Standard input
    print("your name is %s", name);
}