#include <stdio.h>
#include <string.h> // strcmp()

#define STR_LENGTH 30

_Bool isSubstring(const char str1[], const char str2[]);

int main() {
    char str1[STR_LENGTH];
    char str2[STR_LENGTH];

    printf("Give me str1 !!!\n");
    gets(str1);
    printf("Give me str2 !!!\n");
    gets(str2);

    if (strcmp(str1, str2) == 0){   // C primer+: strcmp() returns 0 if its two string arguments are the same and nonzero otherwise.
        printf("are equal\n");
        printf("is a substring\n");       // Assumes equal strings are substrings of each other.
    }
    else {
        printf("are not equal\n");
        if (isSubstring(str1, str2) || isSubstring(str2, str1))
            printf("is a substring\n");
        else
            printf("is not a substring\n");
    }





    return 0;
}

// Returns 1 if str2 is a substring of str1. Returns 0 otherwise.
_Bool isSubstring(const char str1[], const char str2[]){
    if (strlen(str1)<strlen(str2))
        return 0;
    int i,j;

    for (j=0; (strlen(str1)-j)>=strlen(str2); ++j){
        i=0;
        while (str1[j+i] == str2[i]){
            ++i;
            if (str2[i] == '\0')    // All are equal so far, and whole str2 has been checked. str2 is a substring of str1.
                return 1;
        }
    }
    return 0;
}


/// Specification:
//  Write an application that asks for two strings and:
//      Tells if the strings are equal or not
//      Tells if one string is a substring of the other
//
/// Expected output:
//      are equal / are not equal
//      is a substring / is not a substring



/// K&R, stcmp(s,t):
//  Compares the strings s and t, and returns negative, zero or positive if s is lexicographically less than, equal to or greater than t.
//  The value is obtained by subtracting the characters at the first position where s and t disagree.
//  If all equal, and '\0' is encountered: returns 0.
//  If a difference is found: return (*s-*t);