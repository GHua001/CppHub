#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // 整数类型
    printf("char: [%d, %d]\n", CHAR_MIN, CHAR_MAX);
    printf("signed char: [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: [0, %u]\n", UCHAR_MAX);


    printf("short: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: [0, %u]\n", USHRT_MAX);

    printf("int: [%d, %d]\n", INT_MIN, INT_MAX);
    printf("unsigned int: [0, %u]\n", UINT_MAX);

    printf("long: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: [0, %lu]\n", ULONG_MAX);

    printf("long long: [%lld, %lld]\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: [0, %llu]\n", ULLONG_MAX);

    // 浮点类型
    printf("float: [%e, %e]\n", FLT_MIN, FLT_MAX);
    printf("double: [%e, %e]\n", DBL_MIN, DBL_MAX);
    printf("long double: [%Le, %Le]\n", LDBL_MIN, LDBL_MAX);


    //sizeof关键字
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("unsigned int: %zu\n", sizeof(unsigned int));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));

    int iA;
    scanf("%d", &iA);
    printf("%d\n", iA);
    
    return 0;
}
