#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int compute_score(string word);
char[] convert_input(string input);

int char_values[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    p1_char_array = convert_input(p1);
    p2_char_array = convert_input(p2);

    int p1_score = compute_score(p1_char_array);
    int p2_score = compute_score(p2_char_array);

    printf("Player 1 score: %i", p1_score);
    printf("Player 2 score: %i", p2_score);

    if (p1_score > p2_score)
    {
        prinf("Player 1 wins!");
    }
    else {
        printf("Player 2 wins!");
    }

    return 0;
}

char[] convert_input(string input)
{
    StringBuilder sb
}

int compute_score(char[] letters)
{
    int total = 0;

    for (char c : letters)
    {
        total += char_values(c - 65);
    }

    return total;
}
