//
// Created by nitschk on 15.10.2017.
//



#include <stdio.h>
#include <string.h>
#include "student.h"

void prompt(){
    printf("What would you like to do?\n");
    printf("1. Read student information from file and print it back out (from student_read.txt)\n");
    printf("2. Write student information to file (ask for the information first, write to student_write.txt)\n");
    printf("3. Exit\n");
}

struct student readStudentFile(FILE *fp) {
    struct student tmp;
    char tmpline[MAXLINE];

    getFileLine(tmpline, MAXLINE, fp);
    sscanf(tmpline, "%ld", &tmp.id);

    getFileLine(tmp.name, MAXLINE, fp);
    for (int i=0; tmp.name[i] != '\0'; ++i)
        if (tmp.name[i] == '\n'){
            tmp.name[i] = '\0';
            break;
        }

    getFileLine(tmpline, MAXLINE, fp);
    sscanf(tmpline, "%d", &tmp.age);

    return tmp;
}

struct student collectStudentInfo(){
    struct student tmp;
    char tmpline[MAXLINE];

    printf("Gief ID\n");
    getline(tmpline, MAXLINE, TRUE);
    sscanf(tmpline, "%ld", &tmp.id);
//    scanf("%ld", &tmp.id);
//    printf("Collected ID: %s\n", tmpline);
//    printf("Collected ID: %ld\n", tmp.id);


    printf("Gief name\n");
    getline(tmp.name, MAXLINE, FALSE);


    printf("Gief age\n");
    getline(tmpline, MAXLINE, TRUE);
    sscanf(tmpline, "%d", &tmp.age);

    return tmp;
}

void printStudent(struct student st){
    printf("Student id: %ld\n", st.id);
    printf("Name: %s\n", st.name);
    printf("Age: %d\n", st.age);
}

void writeStudentFile(struct student st, FILE *fp){
    fprintf(fp, "%ld\n", st.id);
    fprintf(fp, "%s\n", st.name);
    fprintf(fp, "%d\n", st.age);
}

/// getline implemented from fgets:
int getFileLine(char *line, int max, FILE *fp){

//    if (fgets(line, max, stdin) == NULL)
    if (fgets(line, max, fp) == NULL)       // reads next input line, including newline. Resulting line is terminated by '\0'
        return 0;
    else
        return strlen(line);
}

// Collects characters from stdin until '\n', EOF, or maxlimit is encountered.
int getline(char line[], int lim, _Bool include_NL){
    int c, i;

//    while ((c = getchar()) == ' ' || c == '\t' || c == '\n')
//        ;
//    line[i] = c;
//    ++i;
    for (i=0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i){
        line[i] = c;
//        printf("getline loop: %d\t", i);
    }
    if (include_NL && c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}