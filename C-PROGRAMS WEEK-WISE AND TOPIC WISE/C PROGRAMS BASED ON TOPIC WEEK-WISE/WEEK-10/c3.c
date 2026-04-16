//PES1UG25AM095
#include<stdio.h>
#include<string.h>

struct cricket_players
{
    char name[20];
    int matches;
    int runs;
    int not_out;

    float batting_avg;
};

int main()
{
    int top_player_index = -1;
    float highest_avg = 0;
    int n;

    printf("Enter the number of players: ");
    scanf("%d", &n);

    struct cricket_players c1[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter details of player %d\n", i + 1);

        printf("Enter player name: ");
        getchar();
        scanf("%[^\n]", c1[i].name);

        printf("Enter matches played: ");
        scanf("%d", &c1[i].matches);

        printf("Enter total runs scored: ");
        scanf("%d", &c1[i].runs);

        printf("Enter number of times not out: ");
        scanf("%d", &c1[i].not_out);

        int denominator = 0;
        denominator = c1[i].matches - c1[i].not_out;

        if(denominator == 0)
            c1[i].batting_avg = 0;
        else
            c1[i].batting_avg = (float)c1[i].runs / denominator;

        if(c1[i].batting_avg > highest_avg)
        {
            highest_avg = c1[i].batting_avg;
            top_player_index = i;
        }
    }
    printf("\n--- Player with Highest Batting Average ---\n");

    if(top_player_index != -1)
    {
        printf("Player Name: %s\n", c1[top_player_index].name);
        printf("Matches Played: %d\n", c1[top_player_index].matches);
        printf("Total Runs: %d\n", c1[top_player_index].runs);
        printf("Not Out: %d\n", c1[top_player_index].not_out);
        printf("Batting Average: %.2f\n", c1[top_player_index].batting_avg);
    }
    return 0;
}