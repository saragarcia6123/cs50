#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int a = 1025;
    int *p;
    p = &a;
    printf("a = %d, v = %d\n", p, *p);
    char *p0;
    p0 = (char*)p;

}
