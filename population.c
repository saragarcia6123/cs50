#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int calc_year_growth(int size);

int main(void)
{
    int start_size = 0;
    int end_size = 0;

    while (start_size <= 0)
    {
        start_size = get_int("Start size: ");
    }

    while (end_size <= start_size)
    {
        end_size = get_int("End size: ");
    }

    int years = 0;

    while (start_size < end_size)
    {
        start_size = calc_year_growth(start_size);
        years++;

        print(start_size)
        print(end_size)
    }

    printf("Years: %i\n", years);

}

int calc_year_growth(int size)
{
    int amount_to_add = size / 3;
    int amount_to_subtract = size / 4;

    return size + amount_to_add - amount_to_subtract;
}
