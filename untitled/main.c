#include <stdio.h>
//int main()
//{
//    int a[5] = {1, 2, 3, 4, 5};
//    int i;
//    for (i = 0; i < 5; i++)
//            printf("%c\n", (char)a[i]);
//}

//int main()
//{
//
//    int i = 5;
//    int j;
//
//    j = 5%2;
//    printf("%d", j);
//}


//int main()
//{
//    void foo();
//    void foo();
//    foo();
//    return 0;
//}
//void foo()
//{
//    printf("2 ");
//}

//void foo(int);
//int main()
//{
////    void foo(int);
//    void foo();
//    foo(5);
//    return 0;
//}
//void foo(int i)
//{
////    printf("2 ");
//    printf("%d", i);
//}

////void foo();
//void foo(int);
//int main()
//{
////    void foo(int);
//    foo();
//    return 0;
//}
//void foo()
//{
//    printf("2 ");
//}

//void m();
//void n()
//{
//    m();
//}
//void main()
//{
//    void m()
//    {
//        printf("hi");
//    }
//}

//void main()
//{
//    if(-1);
//    {
//        printf("hi1\n");
//    }
//    if(1);
//    {
//        printf("hello2\n");
//    }
//    if(0); printf("hello3\n"); printf("hello4\n");
//    if(0) printf("hello5\n"); printf("hello6\n");
//}

//void main()
//{
//    double ch = 2;
//    int i = 5;
//    int j = 4;
////    printf("enter a value btw 1 to 2:");
////    scanf("%lf", &ch);
////    switch (i-j)
//    switch ((int)ch)
//    {
//        case 1:
//            printf("1");
//            break;
//        case 2:
//            printf("2");
//            break;
//    }
//}

//void main()
//{
//    char *ch;
////    printf("enter a value btw 1 to 3:");
////    scanf("%s", ch);
//    switch (ch)
//    {
//        case 1:
//            printf("1");
//            break;
//        case 2:
//            printf("2");
//            break;
//    }
//}

//void main()
//{
//    int i = 2;
//    switch (i)
//    {
//        case 1:
//            printf("1\n");
////            break;
//        case 2:
//            printf("2\n");
////            break;
//        default:
//            printf("default\n");
//    }
//}

//int main()
//{
//    int i = 10;
//    void *p = &i;
//    printf("%d\n", (int)*p);
//    return 0;
//}

//int main()
//{
//    int i = 10;
//    void *p = &i;
//    printf("%f\n", *(float*)p);
//    printf("%d\n", *(int*)p);
//    return 0;
//}

//int main()
//{
//    unsigned short sh = 65535;
//    printf("%d\n", sh);
//    sh++;
//    printf("%d", sh);
//
//    return 0;
//}

//void main()
//{
//    char *s= "hello";
//    char *p = s;
//    printf("%c\t%c", 4[p], s[1]);   // Runs: o e
//}

//int main()
//{
//    enum {ORANGE = 5, MANGO, BANANA = 4, PEACH};
//    printf("ORANGE = %d\n", ORANGE);
//    printf("MANGO = %d\n", MANGO);
//    printf("BANANA = %d\n", BANANA);
//    printf("PEACH = %d\n", PEACH);
//}

//void main()
//{
//    float x = 0.1;
//    if (x == 0.1f)
//        printf("Sanfoundry");
//    else
//        printf("Advanced C Classes");
//}

//int main()
//{
//    unsigned int i = 23;
//    signed char c = -23;
//    if (i > c)
//        printf("Yes\n");
//    else if (i < c)
//        printf("No\n");
//}

//int main()
//{
//    unsigned int i = 23;
//    signed char c = -23;
//    if (i < c)
//        printf("Yes\n");
//    else if (i > c)
//        printf("No\n");
//}

/// CompError: Need a ; after a structure declaration statement.
//struct student
//{
//    int no;
//    char name[20];
//}
//void main()
//{
//    struct student s;
//    s.no = 8;
//    printf("hello");
//}

/// CompError: Structure field cannot have an initializer.
//struct student
//{
//    int no = 5;
//    char name[20];
//};
//void main()
//{
//    struct student s;
//    s.no = 8;
//    printf("hello");
//}

//int main()
//{
//    char n[] = "hello world!";
//    char s[13];
//    sscanf(n, "%s", s);
//    printf("%s\n", s);
//    return 0;
//}

//int main()
//{
//    int n;
//    scanf("%d", n);
//    printf("%d\n", n);
//    return 0;
//}

int main()
{
//    char n[20];                         // Works, I guess assuming array is large enough.
//    char *n = "123456789";            // Compiles --> Error on input entry. Undefined behaviour(?).
    char *n="SOmeprettylongstring";     // Compiles --> Error on input entry. Undefined behaviour(?).
    n[0] = 'k';
    n[1] = 'a';
    n[2] = 'k';
    n[3] = 'e';
//    n[0] = "kake";

//    scanf("%s", n);
//    printf("%s", n);
    return 0;
}