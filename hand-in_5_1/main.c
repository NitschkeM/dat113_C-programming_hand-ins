#include <stdio.h>

#define MAXLINE 50
#define TRUE 1
#define FALSE 0
struct student {
    long id;
    char name[MAXLINE];
    int age;
};

struct student giefStudentStruct();
void printStudent(struct student);
//int getline(char line[], int maxline);
int getline(char line[], int maxline, _Bool include_NL);

int main() {

    struct student mystruct = giefStudentStruct();
    printStudent(mystruct);


    return 0;
}


struct student giefStudentStruct() {
    struct student tmp;
    char tmpid[MAXLINE], tmpage[MAXLINE];


    printf("Gief ID\n");
    getline(tmpid, MAXLINE, TRUE);
    sscanf(tmpid, "%ld", &tmp.id);
//    scanf("%ld", &tmp.id);

    printf("Gief name\n");
    getline(tmp.name, MAXLINE, FALSE);


    printf("Gief age\n");
    getline(tmpid, MAXLINE, TRUE);
    sscanf(tmpid, "%d", &tmp.age);
//    scanf("%d", &tmp.age);

    return tmp;
}

void printStudent(struct student st){
    printf("Student id: %ld\n", st.id);
    printf("Name: %s\n", st.name);
    printf("Age: %d\n", st.age);
}

int getline(char line[], int lim, _Bool include_NL){
    int c, i;

//    for (i=0; i < lim-1 && (c = getchar()) != EOF; ++i)
    for (i=0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i)
        line[i] = c;
    if (include_NL && c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

//int getline(char line[], int lim){
//    int c, i;
//
////    for (i=0; i < lim-1 && (c = getchar()) != EOF; ++i)
//    for (i=0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i)
//        line[i] = c;
//    if (c == '\n'){
//        line[i] = c;
//        ++i;
//    }
//    line[i] = '\0';
//    return i;
//}