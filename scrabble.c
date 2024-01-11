#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int NUM_PLAYERS = 2;

string get_word(int player);
int get_word_score(string word);
int get_winner(int scores[]);
void print_winner(int winner);

int main(void)
{
    string player_words[NUM_PLAYERS];
    int player_scores[NUM_PLAYERS];

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        player_words[i] = get_string("Player %i: ", i + 1);
    }

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        player_scores[i] = get_word_score(player_words[i]);
    }

    int winner = get_winner(player_scores);

    print_winner(winner);
}

int get_letter_points(char letter)
{
    string letters = "abcdefghijklmnopqrstuvwxyz";
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    for (int i = 0; i < strlen(letters); i++)
    {
        if (letters[i] == tolower(letter))
        {
            return points[i];
        }
    }
    return 0;
}

int get_word_score(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        score += get_letter_points(word[i]);
    }
    return score;
}

int get_winner(int scores[])
{

    int winner = 0;
    int max_score = scores[0];
    int tie = false;

    for (int i = 1; i < NUM_PLAYERS; i++)
    {
        if (scores[i] == max_score)
        {
            tie = true;
        }
        if (scores[i] > max_score)
        {
            winner = i;
            max_score = scores[i];
        }
    }
    return tie ? -1 : winner;
}

void print_winner(int winner)
{
    if (winner == -1)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Player %i wins!\n", winner + 1);
    }
}
