#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int calc_total(string word);

int[26] char_values = [1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10];

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");


}

int calc_total(char[] letters)
{
    int total = 0;

    for (char c : letters)
    {
        total += char_values(c - )
    }
}
