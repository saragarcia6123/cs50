#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int calc_year_growth(int size);

int main(void)
{

    int currentSize = get_int("Start size: ");
    int endSize = get_int("End size: ");

    int years = 0;

    while (currentSize < endSize)
    {
        currentSize = calc_year_growth(currentSize);
        years++;
    }

    printf("Years: %i\n", years);

}

int calc_year_growth(int size)
{
    int amountToAdd = size / 3;
    int amountToSubtract = size / 4;

    return size + amountToAdd - amountToSubtract;
}
