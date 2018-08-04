#include <stdio.h>

int main() {

    float input    = 1;
    float sum      = 0;
    float count    = 0;
    float avg      = 0;          // 'single' float: 4 bytes, double 'float': 8 bytes. (Double the size at least, but architecture dependant, like all c-types(?))


    printf("Enter numbers\n");

//    while(input!=0){
//        scanf("%d", &input);
//        if(input!=0){
//            count++;
//            sum += input;
//        };
//    }

    while(1){
        scanf("%g", &input);
        if(input==0) break;
        count++;
        sum += input;
    }

    if(count!=0)
        printf("Count: %g\nSum: %g\nAverage: %g\n", count, sum, sum/count);
    else
        printf("Count: %g\nSum: %g\nAverage: %g\n", count, sum, 0.0);


    return 0;
}