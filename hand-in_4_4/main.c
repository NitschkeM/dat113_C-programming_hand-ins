#include <stdio.h>

#define INPUT_LENGTH 50
#define UNIQUE_CHARS 27


int main() {
//    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f',};
    char inputStr[INPUT_LENGTH];

    struct charCount {
        char c;
        int count;
    } charCounts[] = {
            'a', 0,
            'b', 0,
            'c', 0,
            'd', 0,
            'e', 0,
            'f', 0,
            'g', 0,
            'h', 0,
            'j', 0,
            'k', 0,
            'l', 0,
            'm', 0,
            'n', 0,
            'o', 0,
            'p', 0,
            'q', 0,
            'r', 0,
            's', 0,
            't', 0,
            'u', 0,
            'v', 0,
            'w', 0,
            'x', 0,
            'y', 0,
            'z', 0
    };

//    struct charCount charCounts[UNIQUE_CHARS];

    gets(inputStr);

    int i=0;
    while (inputStr[i] != '\0'){
        for (unsigned j=0; j<sizeof(charCounts)/sizeof(struct charCount); ++j){
            if (charCounts[j].c==inputStr[i]){
                charCounts[j].count++;
                break;
            }
        }
        ++i;
    }

    for (unsigned j=0; j<sizeof(charCounts)/sizeof(struct charCount); ++j){
        if (charCounts[j].count!=0)
            printf("'%c' : %d\n", charCounts[j].c, charCounts[j].count);
    }

    return 0;
}



///Specification:
//        Write an application that asks for a string and:
//        Tells how many times each character of the alphabet appears in the string
//
///Example input: aaaaabbccc
///        Expected output:
//              'a' : 5
//              'b' : 2
//              'c' : 3
