/* Lesson on Switch Statements */
#include <stdio.h>
#include <stdlib.h>

int main() {

    char grade = 'C';

    switch(grade) {
    case 'A' : //in this case the grade is A
        printf("You received an %c \n You did great!\n", grade); //then print statement A
        break; //Needed to move onto next case
    case 'B' :
        printf("You received a %c \n you did great!\n", grade);
        break;
    case 'C' :
        printf("You received a %c \n You did poorly\n", grade);
        break;
    case 'D' :
        printf("You received a %c \n You did very bad\n", grade);
        break;
    case 'F' :
        printf("You received an %c \n You failed!\n", grade);
        break;
    default : 
        printf("Invalid Grade\n");


    }


    return 0;
}