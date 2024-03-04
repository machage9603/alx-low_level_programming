#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compute_score(char word);

int main (void)
{
	char player1[20], player2[20];
	printf("Player 1: ");
	scanf(" %s", player1);
	
	printf("Player 2: ");
	scanf(" %s", player2);
}

int compute_score(char word)
{
	int score = 0;
	char player1[20], player2[20];
	int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }

	if (player1 > player2)
        {
                printf("Player 1 won!\n");
        }
        else if (player2 > player1)
        {
                printf("Player 2 won!\n");
        }
        else
        {
                printf("Tie\n");
        }

        return score;
    }
}
