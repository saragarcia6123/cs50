#include <stdio.h>

void moo(int a, int *b);

int main()
{
    int x;
    int *y;

    x = 1;
    y = &x;

    printf("Address of x = %d, value of x = %d\n", &x, x);
    printf("Address of y = &d, value of y = %d, value of *y = %d\n", &y, y, *y);
    moo(9, y);
}

void moo(int a, int *b)
{
    printf("Address of a = %d, value of a = %d\n", &a, a);
    printf("Address of b = %d, value of b = %d, value of *b = %d\n", &b, b, *b);
}
