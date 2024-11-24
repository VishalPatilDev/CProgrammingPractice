#include <stdio.h>
#include <string.h>
#define MAX_SIZE 2

typedef struct Player {
    char name[50];
    int nOfMatches;
    int runs;
    int wickets;
} Player;

void store(Player *p);
void display(Player *p);
void minMax(Player *p);

int main() {
    Player p1[MAX_SIZE];
    store(p1);
    display(p1);
    minMax(p1);
    
    return 0;
}

void store(Player *p) {
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Enter name of player: ");
        getchar();
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strcspn(p[i].name, "\n")] = 0;
        
        printf("Enter number of matches played by the player: ");
        scanf("%d", &p[i].nOfMatches);
        
        printf("Enter number of runs made by the player: ");
        scanf("%d", &p[i].runs);
        
        printf("Enter number of wickets taken by the player: ");
        scanf("%d", &p[i].wickets);
    }
}

void display(Player *p) {
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Name of the player: %s\n", p[i].name);
        printf("Number of matches played: %d\n", p[i].nOfMatches);
        printf("Number of runs made: %d\n", p[i].runs);
        printf("Number of wickets taken: %d\n", p[i].wickets);
    }
}

void minMax(Player* p) {
    int minRuns = p[0].runs, maxRuns = p[0].runs;
    int minWickets = p[0].wickets, maxWickets = p[0].wickets;
    int minRunsIndex = 0, maxRunsIndex = 0;
    int minWicketsIndex = 0, maxWicketsIndex = 0;

    for (int i = 0; i < MAX_SIZE; i++) {
        if (minRuns > p[i].runs) {
            minRuns = p[i].runs;
            minRunsIndex = i;
        }
        if (maxRuns < p[i].runs) {
            maxRuns = p[i].runs;
            maxRunsIndex = i;
        }
        if (minWickets > p[i].wickets) {
            minWickets = p[i].wickets;
            minWicketsIndex = i;
        }
        if (maxWickets < p[i].wickets) {
            maxWickets = p[i].wickets;
            maxWicketsIndex = i;
        }
    }
    
    printf("Maximum number of runs: %d, made by player: %s\n", maxRuns, p[maxRunsIndex].name);
    printf("Minimum number of runs: %d, made by player: %s\n", minRuns, p[minRunsIndex].name);
    printf("Maximum number of wickets: %d, made by player: %s\n", maxWickets, p[maxWicketsIndex].name);
    printf("Minimum number of wickets: %d, made by player: %s\n", minWickets, p[minWicketsIndex].name);
}
