#include <stdio.h>

int main(int argc, char **argv)
{
    int quan = 10;
    int price = 20;

    // using %d with printf()
    printf("Price of %d notebooks is %d", quan,
           quan * price);

    return 0; 
}
