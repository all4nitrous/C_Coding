/* Lesson on Structs */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Needed to use strings

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
}; //structs need the ; symbol at the end



int main() {

    struct Student student1;
    student1.age = 22;
    student1.gpa =  3.2;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");

    struct Student student2;
    student2.age = 24;
    student2.gpa =  3.4;
    strcpy( student2.name, "John");
    strcpy( student2.major, "Education");

    printf("%s\n", student1.name);

    return 0;
}