// Implements all utility functions in world.

#include <stdio.h>

void printFunc(int intArr[], int n){
    printf("Count: %d\n", n);
    printf("Numbers:");
    for(int i=0; i<n; i++){
        printf(" %d", intArr[i]);
    }
    printf("\n");
}
void printFuncSorted(int intArr[], int n){
    printf("Sorted:");
    for(int i=0; i<n; i++){
        printf(" %d", intArr[i]);
    }
    printf("\n");
}

// Insertion sort
void sortFunc(int * intArr, int n){
    if (n<2)
        return;
    for (int j = 1; j<n; j++){
        int key = intArr[j];
        int i = j-1;

        while (i>-1 && intArr[i]>key){
            intArr[i+1] = intArr[i];
            i--;
        }
        intArr[i+1] = key;
    }
}







//void printFunc(int intArr[], int n){
//    for(int i=0; i<n; i++){
//        printf("#%d:\t%d\n", i, intArr[i]);
//        printf("#%d:\t%d\n", i, *(intArr+i));
//    }
//}