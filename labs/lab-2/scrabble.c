#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word)
{
    int temp;
    int score = 0;


    for (int i = 0; i <= strlen(word); i++)
    {
    	temp = (int) toupper(word[i]);
	    if (temp >=65 && temp <=90)
        {
            score += POINTS[temp-65];
        }
    }
    return score;
}

int main(void)
{
    char *word1, *word2;

    word1 = (char *) malloc(5*sizeof(char));
    word2 = (char *) malloc(5*sizeof(char));

    printf("Player 1: ");
    scanf("%s", word1);
    printf("Player 2: ");
    scanf("%s", word2);

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    	printf("Player 1 wins!\n");
    else if(score2 > score1)
    	printf("Player 2 wins!\n");
    else
    	printf("Tie!\n");


    free(word1);
    free(word2);
    return 0;
}