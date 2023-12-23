#include <stdio.h>

int void main()
{
    int a = 128;
    int* p = &a;
    char* p0 = (char)p;
    printf("Value of a: %d, Address of a: %d\nValue of p: %dAddress of p: %d\nValue of p0: %d, Address of p0: %d", a, &a, *p, p, *p0, p0);
}
