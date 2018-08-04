#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "student.h"



int main() {



    prompt();
    int i = getchar();
    getchar();

    while(i != '3'){

        if(i=='1'){
            FILE *fp = fopen("student_read.txt","r");
            struct student mystruct = readStudentFile(fp);
            fclose(fp);
            printStudent(mystruct);
        }
        if(i=='2'){
            struct student mystruct = collectStudentInfo();
            FILE *fp = fopen("student_write.txt","w");
            writeStudentFile(mystruct, fp);
            fclose(fp);
        }
        prompt();
        i=getchar();        // input
        getchar();          // newline
    }


    return 0;
}

