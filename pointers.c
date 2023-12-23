#include <stdio.h>

int main(void)
{
    int a = 127;
    int* p = &a;
    char* p0;
    p0 = (char*)p;
    printf("Value of p: %d, Address of p: %p\nValue of p0: %d, Address of p0: %p\n", *p, p, *p0, p0);
}
