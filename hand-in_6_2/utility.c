// Implements utility stuff



#include <stdio.h>
#include "utility.h"

void printAll(struct student students[], int n){
    for (int i=0; i<n; i++){
        printf("Name = %s, Age = %d\n", students[i].name, students[i].age);
    }
}

void printYoungest(struct student students[], int n){
    if (n==1)
        printf("Youngest: %s\n", students[0].name);
    int age = students[0].age;
    int index = 0;

    for(int i=1; i<n; i++){
        if (students[i].age<age){
            age = students[i].age;
            index=i;
        }
    }
    printf("Youngest: %s\n", students[index].name);
}

void printOldest(struct student students[], int n){
    if (n==1)
        printf("Oldest: %s\n", students[0].name);
    int age = students[0].age;
    int index = 0;

    for(int i=1; i<n; i++){
        if (students[i].age>age){
            age = students[i].age;
            index=i;
        }
    }
    printf("Oldest: %s\n", students[index].name);
}

/* getline: read a line into s, return length */
int getline(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//    }
    s[i] = '\0';
    return i;
}


///* getline: get line into s, return length */
//int getline(char s[], int lim)
//{
//    int c, i;
//    i = 0;
//    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
//        s[i++] = c;
//    if (c == '\n')
//        s[i++] = c;
//    s[i] = '\0';
//    return i;
//}