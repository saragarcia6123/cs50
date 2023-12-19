#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int currentSize = get_int("Start size: ");
    int endSize = get_int("End size: ");

    int years = 0;

    do while (currentSize < endSize)
    {
        currentSize = calcYearGrowth(currentSize)
    }

}

int calcYearGrowth(int size)
{
    int amountToAdd = size / 3;
    int amountToSubtract = size / 4;

    return previous + amountToAdd - amountToSubtract;
}
