#include <stdio.h>
#include <stdlib.h>

int main() {

    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: "); //Where operator symbol is typed
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+') { //Addition
        printf("%f\n", num1 + num2);
    } else if(op == '-') { //Subtraction
        printf("%f\n", num1 - num2);
    } else if(op == '/') { //Division
        printf("%f\n", num1 / num2);
    } else if(op == '*') { //Multiplication
        printf("%f\n", num1 * num2);
    } else {
        printf("Invalid Operator");
    }   

    return 0;
}