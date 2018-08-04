#include <stdio.h>
#include <stdlib.h>
#include "utility.h"


// Ask for number n.
// Loop n times, gathering and storing input with scnaf.
//  Adjust storage location relative to pointer-to-allocated-memory.
// Call print function, passing pointer-to-allocated-memory and n.
// Call sort function, passing pointer-to-allocated-memory and n.
//  Argument is sorted in place.
// Call print function, passing pointer-to-allocated-memory and n.


int main() {

    printf("How many integers will the user type in?\n");

    int n;
    scanf("%d", &n);
    int * intPtr;
    intPtr = (int *) malloc(n * sizeof(int));



    int n_collected = 0;
    while (n_collected < n && scanf("%d", &intPtr[n_collected]) == 1)
        n_collected++;

    if (n_collected == 0)
        printf("No numbers were given\n");
    else {
        printFunc(intPtr, n_collected);
        sortFunc(intPtr, n_collected);
        printFuncSorted(intPtr, n_collected);
    }


    free(intPtr);



    return 0;
}


/// Specification: Write ​​an ​​application ​​that:
//      1. Asks​​ the​​ user​​ how ​​many ​​integers ​​the​​ user​​ will​​ type ​​in
//      2. Allocates ​​memory​​ for​​ the​​ integers
//      3. Reads​ ​in​​ all​ ​the​​ integers
//      4. Prints ​​the ​​integers ​​back ​​out
//      5. Optional:​​Prints ​​all ​​the​ ​integers ​​sorted
/// Requirements:
//      malloc()​​ and ​​free() ​​must​ ​be ​​used.​
// ​     You ​​are ​​not ​​allowed ​​to ​​use​ a ​​pre-allocated​ ​array ​​for​ ​the values.
/// Expected​​output​​with​​no​​numbers:
//      No​ ​numbers ​​were ​​given
/// Expected ​​out put​​ otherwise:
//      Count:​​ 5
//      Numbers:​​ 4​​ 2 ​​1 ​​3 ​​5
//      Sorted:​​ 1 ​​2 ​​3 ​​4 ​​5





/// Memory Allocation:
// Static data is allocated when the progream is loaded into memory.
// Automatic data is allocated when program execution enters a block and deallocated when execution leaves the block.
/// malloc(#bytes)
// You can also allocate more memory as a program runs. The main tool is the malloc() function:
// Argument:    #Bytes of memory to allocate.
// Returns:     Address of first byte of the block.
//              Allocated memory is anonymous, i.e. unnamed.

// Because char represents a byte, malloc() has traditionally been defined as a type pointer-to-char.
// Since ANSI C standard however, C uses a new type: pointer-to-void, a "generic pointer".
// The malloc() function can be used to return pointers to arrays, structures, etc.,
//  so normally the return value is typecast to the proper value.
// --> Typecast for clarity.
// if malloc() fails to find the required space, it returns the null pointer.

/// free()
// Normally, you should balance each use of malloc() with a use of free().
// The free() function takes as its argument an address returned earlier by malloc() and frees up the allocated memory.





/// Loop breaks when input does not match control specification: For any char not convertable to %d.
//    int d;
//    while (scanf("%d", &d) == 1){
//        printf("%d\n", d);
//    }
