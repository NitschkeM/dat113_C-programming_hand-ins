// Declares utility stuff
#ifndef HAND_IN_6_2_UTILITY_H
#define HAND_IN_6_2_UTILITY_H



#define MAXN 30 // Max length of student names.
struct student{
    char name[MAXN];
    int age;
};

void printAll(struct student students[], int n);
void printYoungest(struct student students[], int n);
void printOldest(struct student students[], int n);
int getline(char s[],int lim);

#endif //HAND_IN_6_2_UTILITY_H
