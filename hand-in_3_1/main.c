#include <stdio.h>
#include <math.h>

int main() {


    void printAll(int *numArr, int size);


    int index=0, size = 10, numArr[size];  // Index is initialized to 0 if I remember correctly (i.e. when not initialized manually, tested).

    printf("Enter numbers:\n");



    //scanf("%d%d%d%d%d%d%d%d%d%d", numArr, numArr+1,numArr+2,numArr+3,numArr+4,numArr+5,numArr+6,numArr+7,numArr+8,numArr+9); // Works
    while(index<size){
        scanf("%d", &numArr[index]);
        index++;
    }

    printAll(numArr, size);



    return 0;
}

void exchange(int* arr, int a, int b){
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int partition(int *arr, int p, int r){
    int x = arr[r];
    int i = p - 1;
    for (int j=p; j<r; j++){
        if (arr[j] < x){
            i++;
            exchange(arr, i, j);
        }
    }
    exchange(arr, i+1, r);
    return i+1;
}

void quicksort(int *arr, int p, int r){
    if (p<r){
        int q = partition(arr, p, r);
        quicksort(arr, p, q-1);
        quicksort(arr, q+1, r);
    }
}

void printMin(int *numArr, int size){
    int min = numArr[0];
    for (int i=1; i<size; i++)
        if (min > numArr[i])
            min = numArr[i];
    printf("Minimum: %d\n", min);
}
void printMax(int *numArr, int size){
    int max = numArr[0];
    for (int i=1; i<size; i++)
        if (max < numArr[i])
            max = numArr[i];
    printf("Maximum: %d\n", max);
}

void printSum(int *numArr, int size){
    int sum = numArr[0];
    for (int i=1; i<size; i++)
        sum += numArr[i];
    printf("Sum: %d\n", sum);
}
void printAvg(int *numArr, int size){
    int sum = numArr[0];
    for (int i=1; i<size; i++)
        sum += numArr[i];
    printf("Average: %g\n", (double)sum/size);
}

void printSorted(int *numArr, int size){
    quicksort(numArr, 0, size-1);
    printf("Sorted: ");
    for (int i=0; i<size; i++){
        printf("%d ", numArr[i]);
    }
    printf("\n");
}
void printMedian(int *numArr, int size){
    quicksort(numArr, 0, size-1);

    if (size % 2 != 0)
        printf("%d\n", (numArr[size/2]));
    else {
        double doubint, half = size/2;
        modf(half, &doubint);
        int integer = (int)doubint;
        printf("Median: %g\n", ((double)(numArr[integer-1]+numArr[integer])/2));
    }
}

void printAll(int *numArr, int size){
    printMin(numArr, size);
    printMax(numArr, size);
    printSum(numArr, size);
    printAvg(numArr, size);
    printSorted(numArr, size);
    printMedian(numArr, size);
}





/// Ways of passing pointers to array elements:
//scanf("%d", numArr);
//scanf("%d", &numArr[1]);
//scanf("%d", numArr + 2);
/// Ways of expressing the underlying value of array elements:
//printf("First element: %d\n", *numArr);
//printf("Second element: %d\n", numArr[1]);
//printf("Third element: %d\n", *(numArr + 2));
//printf("Third element: %d\n", numArr[3]);


/// scanf() uses whitespace (newlines, tabs, and spaces) to deciede how to divide the input into separate fields.
/// It matches up consecutive conversion specifications to consecutive fields, skipping whitespace in between.
/// THE EXCEPTION: %c will read the very next character, even if the character i whitespace.

///    Will not report conversion errors "consider using strtol instead.
//    scanf("%d", numArr);


///    Prints memory size allocated: 40 bytes (10 four byte integers)
//    printf("Sizeof numArr: %d\n", arrSize);


/// Array initializations
//    char chArr[20] = "Here is text";
//    char chArr2[] = "Here is text";
//    char chArr3[] = {'H','e','l','l','o'};
//    char chArr4[5] = {'H','e','l','l','o'};
/// Array size in terms of #items.
//int  size3 = sizeof(chArr3)/sizeof(chArr[0]); // Division unnecessary because char already has size 1.
//printf("size3: %d\n", size3);


/// sizeof char == 1, and printf with %z
//    char char1 = 'A';
//    size_t char1Size = sizeof(char1);
//    printf("size char1: %lu\n", char1Size);     // Using %z to print size_t, not sure of compatibility. Possibly troublesome with -pedantic. Did not get it to work, prints the characters %zd.
