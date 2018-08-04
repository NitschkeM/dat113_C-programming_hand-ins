#include <stdio.h>
#include <string.h>                                     // for strlen() prototype.


#define INPUT_LENGTH 30                                 // Note no equal sign, no ;. It is not "C", not an assignment, not a statement. Its for preprocessor, right?

int main() {
    char inputWord[INPUT_LENGTH];
//    char inputReversed[INPUT_LENGTH];

    void reverseString(const char* original, char* reversed);
    _Bool isPalindrome(const char*);                          // 1:true, 0:false. Assignment of non-zero value to _Bool results in 1:true.



    printf("Enter a word:\n");
    scanf("%s", inputWord);                             // Don't need address of operator, because the name of an array will be interpreted as the address of 1'st elem of array.
    printf("The word contains %u letters\n", strlen(inputWord));
//    printf("The word contains %zd letters", strlen(inputWord)); // Returns "contains zd letters" --> I.e. does not work properly.

    if(isPalindrome(inputWord))
        printf("The word is a palindrome\n");
    else
        printf("The word is not a palindrome\n");

    char inputReversed[strlen(inputWord)];
//    printf("Length of inputReversed: %u\n", sizeof(inputReversed)/ sizeof(inputReversed[0]));
    reverseString(inputWord, inputReversed);
    printf("The word reversed is '%s'\n", inputReversed);


    return 0;
}

void reverseString(const char * original, char * reversed){
    unsigned inputLength = (unsigned)strlen(original);
    for(unsigned i=0; i<inputLength; i++) {
        reversed[inputLength-1-i] = original[i];
    }
}

_Bool isPalindrome(const char myArr[]) {          // Example of special case where 'char myArr[]' is interpreted as 'char * myArr'
    // Should take a single word, and check that.
    // Utilizing the reverseString function.
    // Possible(?): Take original, create tmpReversed, pass both to reverseString --> Compare, return 1:true/0:false. Don't compare pointers to first element... (arrName)
    unsigned length = strlen(myArr);
    char tmpReversed[length];
    reverseString(myArr, tmpReversed);
    for (unsigned i=0; i<length; i++) {
        if (myArr[i] != tmpReversed[i])
            return 0;
        return 1;
    }

    return (myArr==tmpReversed);
}

//  Asks the user for a word and:
//      Tells how many letters are in the word.
//      Tells if the word is a palindrome (reads same backwards and forwards, sos).
//      Prints the word reversed.

//Expected output:
//      The word contains 5 letters
//      The word is a palindrome / The word is not a palindrome
//      The word reversed is 'olleh'

//  Requirements:
//      Checking if the word is a palindrome must be done in a function returning bool.
//      Reversing the string must be done in function as well.


/// ***I will pass an array holding integers to a function:***
//  int myArr[10];                  -- Declare, Q: Like variables, non-initialized array members may have any value.
//                                          A partially initialized array has its remaining members set to 0.
// *** init ***                     -- Initialize, Q: Can I use {1, 2, ..., n} notation to initialize, AFTER a declaration? Or only 1 by one? Or setting equal to other array?
//  myFunc(myArr);                  -- Function Call: A pointer (int *) to the first element of the array is passed as an argument.
//  void myFunc(int *);             -- Works: Correct type, but does not indicate that it points to an element in an array. Don't know array size.
//  void myFunc(int * myArray);     -- Works: Using name to indicate that the element pointed to is part of an array.       Don't know array size.
//  void myFunc(int myArr[]);       -- Works: IN THE CONTEXT OF A FUNCTION PROTOTYPE OR FUNCTION DEFINITION HEADER, AND ONLY IN THAT CONTEXT, YOU CAN
//                                              SUBSTITUTE int myArr[] FOR int * myArr.
//                                              A special notation reminding the reader that the argument is part of an array.  Don't know array size.
// *** Dealing with size: ***
//  myFunc(myArr, sizeof(myArr)/sizeof(myArr[0]))   *** Note how the size of function applied to an array name gives size of whole array - not first element. HOW?
//  void myFunc(int *, int arrSize);

/// Printing sizeof quantities: Use %u or %lu or %llu if your compiler does not supprt the %zd specified for printing sizeof quantities. System dependent, important for portability.
