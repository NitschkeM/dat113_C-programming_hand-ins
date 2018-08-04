#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"

int main() {

    // Gather info until name == stop.
    //  Store info in struct.
    //  Store structs in array.
    //      Grow array by 5 elements when more space is needed.

    int arrSize = 5;
    struct student * students;
    students = (struct student *) malloc(arrSize* sizeof(struct student));  // Create array of student structures.

    int n_students = 0;

    while(1){
        struct student newStudent;
        char age[3];

        printf("Gief Name\n");
        getline(newStudent.name, MAXN);

        if (!strcmp(newStudent.name, "stop"))   // if no difference until str_1[i] == \0.
            break;

        printf("Gief Age\n");
        getline(age, MAXN);
        sscanf(age, "%d", &newStudent.age);

        printf("\tName: %s\n\tAge: %d\n", newStudent.name, newStudent.age);

        if (n_students == arrSize)
            students = realloc(students, (arrSize+5)* sizeof(struct student));
        students[n_students] = newStudent;
        n_students++;
    }

    if (n_students == 0)
        printf("No students were given");
    else{
        printf("Count: %d\n", n_students);
        printAll(students, n_students);
        printYoungest(students, n_students);
        printOldest(students, n_students);
    }

    return 0;
}