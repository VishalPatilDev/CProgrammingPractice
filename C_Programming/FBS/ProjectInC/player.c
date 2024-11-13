#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 100

typedef struct {
    int jerseyNumber;
    char name[50];
    int runs;
    int wickets;
    int matchesPlayed;
} Player;


int playerCount = 0;

void addPlayer(Player* players) {
    if (playerCount >= MAX_PLAYERS) {
        printf("Player limit reached!\n");
        return;
    }
    
    Player newPlayer;
    
    printf("Enter Jersey Number: ");
    scanf("%d", &newPlayer.jerseyNumber);
    printf("Enter Player Name: ");
    scanf("%s", newPlayer.name);
    printf("Enter Runs: ");
    scanf("%d", &newPlayer.runs);
    printf("Enter Wickets: ");
    scanf("%d", &newPlayer.wickets);
    printf("Enter Matches Played: ");
    scanf("%d", &newPlayer.matchesPlayed);
    
    players[playerCount++] = newPlayer;
    printf("Player added successfully!\n");
}

void removePlayer(Player* players) {
    int jerseyNumber;
    printf("Enter Jersey Number of player to remove: ");
    scanf("%d", &jerseyNumber);
    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jerseyNumber) {
            players[i] = players[playerCount - 1];
            playerCount--;
            printf("Player removed successfully!\n");
            return;
        }
    }
    
    printf("Player not found!\n");
}

void searchPlayer(Player* players) {
    char name[50];
    int jerseyNumber;
    printf("Search by (1) Jersey Number (2) Player Name: ");
    int choice;
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter Jersey Number: ");
        scanf("%d", &jerseyNumber);
        
        for (int i = 0; i < playerCount; i++) {
            if (players[i].jerseyNumber == jerseyNumber) {
                printf("Player Found: %s, Runs: %d, Wickets: %d, Matches: %d\n",
                    players[i].name, players[i].runs, players[i].wickets, players[i].matchesPlayed);
                return;
            }
        }
        printf("Player not found!\n");
    } else if (choice == 2) {
        printf("Enter Player Name: ");
        scanf("%s", name);
        
        for (int i = 0; i < playerCount; i++) {
            if (strcmp(players[i].name, name) == 0) {
                printf("Player Found: Jersey Number: %d, Runs: %d, Wickets: %d, Matches: %d\n",
                    players[i].jerseyNumber, players[i].runs, players[i].wickets, players[i].matchesPlayed);
                return;
            }
        }
        printf("Player not found!\n");
    } else {
        printf("Invalid choice!\n");
    }
}

void updatePlayer(Player* players) {
    int jerseyNumber;
    printf("Enter Jersey Number of player to update: ");
    scanf("%d", &jerseyNumber);
    
    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jerseyNumber) {
            printf("Enter new Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter new Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter new Matches Played: ");
            scanf("%d", &players[i].matchesPlayed);
            printf("Player data updated successfully!\n");
            return;
        }
    }
    
    printf("Player not found!\n");
}

void displayAllPlayers(Player* players) {
    if (playerCount == 0) {
        printf("No players available.\n");
        return;
    }
    
    for (int i = 0; i < playerCount; i++) {
        printf("Jersey Number: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",players[i].jerseyNumber, players[i].name, players[i].runs, players[i].wickets, players[i].matchesPlayed);
    }
}

// void displayTopPlayers(Player* players) {
//     if (playerCount == 0) {
//         printf("No players available.\n");
//         return;
//     }

//     int minRuns = players[0].runs, maxRuns = players[0].runs;
//     int minWickets = players[0].wickets, maxWickets = players[0].wickets;
//     int minRunsIndex = 0, maxRunsIndex = 0;
//     int minWicketsIndex = 0, maxWicketsIndex = 0;

//     for (int i = 0; i <playerCount; i++) {
//         if (minRuns > players[i].runs) {
//             minRuns = players[i].runs;
//             minRunsIndex = i;
//         }
//         if (maxRuns < players[i].runs) {
//             maxRuns = players[i].runs;
//             maxRunsIndex = i;
//         }
//         if (minWickets > players[i].wickets) {
//             minWickets = players[i].wickets;
//             minWicketsIndex = i;
//         }
//         if (maxWickets < players[i].wickets) {
//             maxWickets = players[i].wickets;
//             maxWicketsIndex = i;
//         }
//     }
    
//     printf("Maximum number of runs: %d, made by player: %s\n", maxRuns, players[maxRunsIndex].name);
//     printf("Minimum number of runs: %d, made by player: %s\n", minRuns, players[minRunsIndex].name);
//     printf("Maximum number of wickets: %d, made by player: %s\n", maxWickets, players[maxWicketsIndex].name);
//     printf("Minimum number of wickets: %d, made by player: %s\n", minWickets, players[minWicketsIndex].name);
// }

void displayTopPlayers(Player* p){
    if(playerCount==0){
        printf("No players available!\n");
        return;
    }
    int temp;
    for(int i=0;i<playerCount;i++){
        for(int j=i+1;j<playerCount;j++){
            if(p[i].runs<p[j].runs){
                temp=p[i].runs;
                p[i].runs=p[j].runs;
                p[j].runs=temp;
            }
        }
    }
    printf("Top 3 players are : \n");
    for(int i=0;i<3;i++){
        printf("%s with runs %d\n",p[i].name,p[i].runs);
    }
}

int main() {
    Player players[MAX_PLAYERS];
    Player players[MAX_PLAYERS] = {
        {10, "Alice", 2500, 50, 75},
        {12, "Bob", 1500, 30, 45},
        {7, "Charlie", 3000, 75, 90}
    };
    int choice;
    while (1) {
        printf("\n-------------------Player Management System--------------------\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player Data\n");
        printf("5. Display All Players\n");
        printf("6. Display Top Players\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPlayer(players);
                break;
            case 2:
                removePlayer(players);
                break;
            case 3:
                searchPlayer(players);
                break;
            case 4:
                updatePlayer(players);
                break;
            case 5:
                displayAllPlayers(players);
                break;
            case 6:
                displayTopPlayers(players);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
