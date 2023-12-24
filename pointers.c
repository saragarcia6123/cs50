#include <stdio.h>

int main(void)
{
    int a = 127;
    int* p = &a;
    char* p0;
    p0 = (char*)p;
    printf("Value of p: %d, Address of p: %d\nValue of p0: %d, Address of p0: %u\n", *p, p, *p0, p0);
}
