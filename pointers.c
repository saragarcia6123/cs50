#include <stdio.h>

int main(void)
{
    int a = 128;
    int* p = &a;
    char* p0;
    p0 = (char*)p;
    printf("Value of a: %i, Address of a: %p\nValue of p: %dAddress of p: %p\nValue of p0: %d, Address of p0: %s", a, &a, *p, p, *p0, p0);
}
