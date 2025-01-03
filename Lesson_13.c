#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) { //max will contain three numbers
    int result;
    if(num1 >= num2 && num1 >= num3) { //If number 1 is greater than or equal to #2 and #3
        result = num1;                //Print #1
    } else if(num2 >= num1 && num2 >= num3) { //#2 is bigger than #2 and #3
        result = num2;      //Print #2
    } else {
        result = num3;  //Otherwise print #3
    }


    return result;
}


int main() {

    printf("%d", max(4, 10, 15)); //#1 and 


    return 0;
}