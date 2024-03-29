#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int calc_year_growth(int size);

int main(void)
{
    int start_size = 0;
    int end_size = 0;

    while (start_size < 9)
    {
        start_size = get_int("Start size: ");
    }

    while (end_size < start_size)
    {
        end_size = get_int("End size: ");
    }

    int years = 0;

    while (start_size < end_size)
    {
        start_size = calc_year_growth(start_size);

        if (start_size == -1)
        {
            printf("0\n");
            return -1;
        }

        years++;
    }

    printf("Years: %i\n", years);

    return 0;

}

int calc_year_growth(int size)
{
    int amount_to_add = size / 3;
    int amount_to_subtract = size / 4;

    if (amount_to_add == amount_to_subtract) {
        return -1;
    }

    return size + amount_to_add - amount_to_subtract;
}
