#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);
bool is_letter(char c);

int char_values[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    int p1_score = compute_score(p1);
    int p2_score = compute_score(p2);

    printf("Player 1 score: %i", p1_score);
    printf("Player 2 score: %i", p2_score);

    if (p1_score > p2_score)
    {
        printf("Player 1 wins!\n");
    }
    else if (p1_score < p2_score)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}

bool is_letter(char c)
{
    return ((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122));
}

int compute_score(string input)
{
    int total = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        char current_char = input[i];

        if (is_letter(toupper(current_char)))
        {
            printf("%c ", current_char);
            total += char_values[toupper(current_char - 65)];
        }
    }

    return total;
}
