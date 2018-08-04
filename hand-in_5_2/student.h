//
// Created by nitschk on 15.10.2017.
//

#ifndef HAND_IN_5_2_STUDENT_H
#define HAND_IN_5_2_STUDENT_H

#define MAXLINE 50
#define TRUE 1
#define FALSE 0


struct student {
    long id;
    char name[MAXLINE];
    int age;
};

void prompt();
struct student readStudentFile(FILE *fp);
struct student collectStudentInfo();
void printStudent(struct student);
void writeStudentFile(struct student, FILE *fp);
int getFileLine(char *line, int max, FILE *fp);
int getline(char line[], int max, _Bool include_NL);

#endif //HAND_IN_5_2_STUDENT_H
