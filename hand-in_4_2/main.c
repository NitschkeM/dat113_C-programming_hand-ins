#include <stdio.h>
#include <string.h>     // strlen()
#include <ctype.h>      // toupper(), tolower()

#define INPUT_ARR_SIZE 50

    void strToUpper(const char original[], char * result);  // Using different argument notations to get used to it.
    void strToLower(const char * original, char result[]);  // Using different argument notations to get used to it.
//    void splitString(const char original[], char result[]);

int main() {

    char inputString[INPUT_ARR_SIZE];
    unsigned inputLength = 0;



    printf("Give me string!\n");
    gets(inputString);
    inputLength = (unsigned)strlen(inputString);

    char upperString[inputLength];
    char lowerString[inputLength];
    char firstPart[inputLength/2];  // Need to understand how this handles odd lengths.
    char secondPart[inputLength/2];
//    char splittedString[inputLength+1];

    strToUpper(inputString, upperString);
    strToLower(inputString, lowerString);
//    splitString(inputString, splittedString);

    printf("myString: %s\n", inputString);
    printf("The string in uppercase is '%s'\n", upperString);
    printf("The string in lowercase is '%s'\n", lowerString);
//    printf("The string split in two is '%s'\n", splittedString);
    int i=0;

//    while (inputString[i] != '\0'){
//        if (i<inputLength/2)
//            firstPart[i] = inputString[i];
//        else
//            secondPart[i] = inputString[i];
//        i++;
//    }
    while (i<inputLength/2){
        firstPart[i] = inputString[i];
        i++;
    }
    firstPart[i] = '\0';
    while (inputString[i] != '\0'){
        secondPart[i-inputLength/2] = inputString[i];
        ++i;
    }
    secondPart[i-inputLength/2] = '\0';

        printf("The string split in two is '%s - %s'\n", firstPart, secondPart);
    return 0;
}



void strToUpper(const char original[], char * result){
    // converts content of arg1 to uppercase and stores it in arg2.
    int i=0;
    while((result[i]=toupper(original[i])) != '\0')
        ++i;

//    for (int j=0; j<30; j++){
//        printf("Result[%d]: %d\n", j, result[j]);
//    }
}
void strToLower(const char * original, char result[]){
    // converts content of arg1 to lowercase and stores it in arg2.
    int i=0;
    while((result[i]=tolower(original[i])) != '\0')         // Important to close the assignment expression in parenthesis.
        ++i;
//    for (unsigned i=0; i<strlen(original); i++)
//        result[i] = (char)tolower(original[i]);     // Ansi int returned? How will it be affected by a (char) cast ?
}

//void splitString(const char original[], char result[]){
//    int i;
////    printf("strlen(original) = %d\n", strlen(original));
//
//    /// Assume even:
//    for (i=0; i<strlen(original)/2; i++){       // Both ++i, and i++: For i<2: loopFor:0, loopFor:1, NoLoopFor:2. After loops: i==2.
//        result[i]=original[i];
////        printf("After for(), i == %d\n", i);
////        printf("For-loop, progress: %s\n", result);
//    }
//    for (int j=0; j<3; j++){
//        result[i] = (j==0 || j==2) ? ' ' : '-';
//        i++;
//    }
////    printf("After '-' addition, progress: %s\n", result);
//    ++i;
//    while ((result[i]=original[i-3]) != '\0'){
////        printf("While-loop, progress: %s\n", result);
////        printf("While-loop, original[i-1] == %c\n", original[i-1]);
//
//        ++i;
//    }
//
//
//    // Modulus to determine odd/even, then treat separately?
//}

///Specification:
//  Write an application that asks for a string as input and:
//          Prints the string in uppercase and lowercase
//          Splits the string on the middle and prints the two parts with " - " between
//
//  Requirements:
//      Converting the string to upper and lower case must be done in functions.
//      Do not use strlwr or strupr, they are not standard and will not work on Bamboo.
//
///Expected output:
//The string in uppercase is 'HELLO WORLD'
//The string in lowercase is 'hello world'
//The string split in two is 'hello -  world'




/// Computers can only understand binary/numbers, so an ASCII code is the numerical representation of a character or an action of some sort.
/// The non-printing characters are rarely used for their original purpose.
/// notepad.exe creates ASCII text, or in MS Word you can save a file as 'text only'.
/// Unicode is a superset of ASCII, the number 0-128 has same meaning in ASCII and unicode.
/// UTF-32 and UTF-8 are ways of storing unicode characters in byte sequences - because they generally don't fit in an 8-bit byte.
/// Examples where, I think:
///     printf takes an argument of some data type (char in this case).
///     The conversion specifier %d, tells printf to read and interpret the values in the given data type as the data type specified by conversion specifier.
///     printf then converts the interpretation (e.g. a character type, interprted as an integer) to text, which is printed to stdout.
    //char C = 'C';
    //printf("char C: %d\n", C);            // Prints 67, the ASCII code for 'C'.
    //char c = 'c';
    //printf("char c: %d\n", c);            // Prints 99, the ASCII code for 'c'.
    //char space = ' ';
    //printf("char space: %d\n", space);    // Prints 32, the ASCII code for Space.

    //char R = 82;
    //printf("char space: %c\n", R);    // Prints R, 82 is the ASCII code for 'R'.

/// Test: Does defined data type matter when passed as argument to printf? Or does only the conversion specifier matter?
/// Certainly the data type passed has some implications, because it may consinst of different byte sizes?
/// Basically: What does printf read when passed a character? Does it look at raw values @ the memory address?




/// Experiment, inspired by K&R, p.30
////    for (i=0; i<max; i++){       // Copy everything, assume '\0' gets copied correctly. Works? Edge cases not checked.
//    for (i=0; i<max-1 && original[i] != EOF && original[i]!='\n'; ++i){
//        result[i] = toupper(original[i]);     // Ansi int returned? How will it be affected by a (char) cast ?
//        printf("Upper, progress: %s\n", result);
//    }
//    if (original[i] == '\n'){
//        result[i] = original[i];
//        ++i;
//    }
//    result[i] = '\0';

//    result[i+1] = '\0';