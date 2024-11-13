#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int jerseyNumber;
    char name[50];
    int runs;
    int matchesPlayed;
    int wickets;
} Player;

int playerCount;
int capacity = 2;

Player* addPlayer(Player* players) {
    if (playerCount >= capacity) {
        capacity *= 2;
        players = realloc(players, sizeof(Player) * capacity);
        // if (players == NULL) {
        //     printf("Memory allocation failed!\n");
        //     exit(1);
        // }
    }

    Player newPlayer;
    printf("=================== ADD PLAYER ===================\n");
    printf("Enter Jersey Number: ");
    scanf("%d", &newPlayer.jerseyNumber);
    printf("Enter Player Name: ");
    getchar();  // Clear newline from buffer
    fgets(newPlayer.name, sizeof(newPlayer.name), stdin);
    newPlayer.name[strcspn(newPlayer.name, "\n")] = '\0';
    printf("Enter Runs: ");
    scanf("%d", &newPlayer.runs);
    printf("Enter Matches Played: ");
    scanf("%d", &newPlayer.matchesPlayed);
    printf("Enter Wickets: ");
    scanf("%d", &newPlayer.wickets);
    players[playerCount++] = newPlayer;
    printf("Player added successfully!\n");

    return players;  // Return the updated pointer
}

void removePlayer(Player* players) {
    printf("=================== REMOVE PLAYER ===================\n");
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
    printf("=================== SEARCH PLAYER ===================\n");
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
        getchar();
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        for (int i = 0; i < playerCount; i++) {
            if (strcasecmp(players[i].name, name) == 0) {
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
    printf("=================== UPDATE PLAYER ===================\n");
    int jerseyNumber;
    printf("Enter Jersey Number of player to update: ");
    scanf("%d", &jerseyNumber);
    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jerseyNumber) {
            int choice;
            printf("Enter choice (1) to update runs (2) to update wickets (3) to update no of matches: ");
            scanf("%d", &choice);
            if (choice == 1) {
                printf("Enter new Runs: ");
                scanf("%d", &players[i].runs);
            } else if (choice == 2) {
                printf("Enter new Wickets: ");
                scanf("%d", &players[i].wickets);
            } else if (choice == 3) {
                printf("Enter new Matches Played: ");
                scanf("%d", &players[i].matchesPlayed);
            } else {
                printf("Invalid choice!\n");
            }
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
    printf("\n----------------------------------------------------------------------------------\n");
    printf("| Jersey Number | Name                           | Runs | Wickets | Matches|\n");
    printf("\n----------------------------------------------------------------------------------\n");
    for (int i = 0; i < playerCount; i++) {
        printf("| %-13d | %-30s | %5d | %7d | %7d |\n",
            players[i].jerseyNumber, players[i].name, players[i].runs, players[i].wickets, players[i].matchesPlayed);
    }
    printf("\n----------------------------------------------------------------------------------\n");
}

void displayTopPlayers(Player* players) {
    if (playerCount == 0) {
        printf("No players available!\n");
        return;
    }
    printf("=================== TOP PLAYERS ===================\n");
    int choice;
    printf("Enter choice: (1) for displaying top players according to runs (2) for displaying top players according to wickets: ");
    scanf("%d", &choice);
    if (choice == 1) {
        // Sort by runs
        for (int i = 0; i < playerCount - 1; i++) {
            for (int j = 0; j < playerCount - i - 1; j++) {
                if (players[j].runs < players[j + 1].runs) {
                    Player temp = players[j];
                    players[j] = players[j + 1];
                    players[j + 1] = temp;
                }
            }
        }
        printf("Top 3 players according to highest runs are:\n");
        for (int i = 0; i < (playerCount < 3 ? playerCount : 3); i++) {
            printf("%s with runs %d\n", players[i].name, players[i].runs);
        }
    } else if (choice == 2) {
        // Sort by wickets
        for (int i = 0; i < playerCount - 1; i++) {
            for (int j = 0; j < playerCount - i - 1; j++) {
                if (players[j].wickets < players[j + 1].wickets) {
                    Player temp = players[j];
                    players[j] = players[j + 1];
                    players[j + 1] = temp;
                }
            }
        }
        printf("Top 3 players according to highest wickets are:\n");
        for (int i = 0; i < (playerCount < 3 ? playerCount : 3); i++) {
            printf("%s with wickets %d\n", players[i].name, players[i].wickets);
        }
    } else {
        printf("Invalid choice!\n");
    }
}

int main() {
    Player* players = (Player*)malloc(sizeof(Player) * capacity);
    if (!players) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    Player initialPlayers[] = {
        {18, "Virat Kohli", 4000, 5, 100},
        {93, "Bumrah", 1000, 150, 40},
        {7, "MS Dhoni", 2000, 10, 70},
        {45, "Rohit Sharma", 3800, 5, 110},
        {33, "Hardik Pandya", 2200, 60, 100},
        {63, "Suryakumar Yadav", 2100, 4, 70},
        {1, "KL Rahul", 3200, 3, 80},
        {13, "Virat Mohli", 3000, 5, 40}
    };
    
    for (int i = 0; i < sizeof(initialPlayers) / sizeof(initialPlayers[0]); i++) {
        players[i] = initialPlayers[i];
    }
    playerCount = sizeof(initialPlayers) / sizeof(initialPlayers[0]);

    int choice;
    while (1) {
        printf("\n------------------- Player Management System --------------------\n");
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
                players = addPlayer(players);
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
                free(players);  // Free allocated memory
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
