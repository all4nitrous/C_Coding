/* Writing files */
#include <stdio.h>
#include <stdlib.h>

int target_Line = 3;
int current_Line = 1;



int main() {


    char line[225]; // How many lines the "r" can read
    //FILE * fpointer = fopen("Employees.txt",  "w"); // fpointer is storing the memory address of the file/folder
    FILE * fpointer = fopen("Employees.txt",  "r"); // fpointer is storing the memory address of the file/folder
    //fprintf(fpointer, "Jim Salesman\nPam, Receptionist\nOscar, Accounting"); // Fprintf allows us to write info into a file
    //fprintf(fpointer, "\nKelly, Customer Service");

    while(fgets(line, 225, fpointer)) {
        if(current_Line == target_Line) {
            printf("%s", line);
            break;
        }
        current_Line++; //Keeps track of the line we are on, and allows us to move onto the next
    }

   /* fgets(line, 225, fpointer); //fgets reads line by line/specify area, size, and the fpointer to access the file
    printf("%s", line);

    fclose(fpointer); */ // Print the first line of your code

return 0;
}