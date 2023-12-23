#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("a = %i\n", a);
    char *p0;
    p0 = (char*)p;

}
