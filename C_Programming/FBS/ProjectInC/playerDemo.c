#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #define MAXX 100
typedef struct {
    int jerseyNumber;
    char name[50];
    int runs;
    int matchesPlayed;
    int wickets;
} Player;
int playerCount ;
void addPlayer(Player* players) {
    players = realloc(players, (playerCount + 1) * sizeof(Player));
    // if (playerCount >= MAXX) {
    //     printf("Player limit reached!\n");
    //     return;
    // }
    Player newPlayer;
    printf("=================== ADD PLAYER ===================\n");
    printf("Enter Jersey Number: ");
    scanf("%d", &newPlayer.jerseyNumber);
    printf("Enter Player Name: ");
    // scanf("%s", newPlayer.name);
    getchar();
    fgets(newPlayer.name,sizeof(newPlayer.name),stdin);
    newPlayer.name[strcspn(newPlayer.name, "\n")] = '\0';
    printf("Enter Runs: ");
    scanf("%d", &newPlayer.runs);
    printf("Enter Matches Played: ");
    scanf("%d", &newPlayer.matchesPlayed);
    printf("Enter Wickets: ");
    scanf("%d", &newPlayer.wickets);
    players[playerCount++] = newPlayer;
    printf("Player added successfully!\n");
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
        fgets(name,sizeof(name),stdin);
        name[strcspn(name, "\n")] = '\0';
        Player playerName[100];
        for(int i=0;i<playerCount;i++){
            if(players[i].name==strupr(players[i].name)){
                strlwr(players[i].name);
            }
        }
        int flag=0;
        for (int i = 0; i < playerCount; i++) {
            if (strstr(players[i].name, name)!='\0') {
                playerName[i]=players[i];
                printf("Player Found - Jersey Number: %d, Runs: %d, Wickets: %d, Matches: %d\n",playerName[i].jerseyNumber, players[i].runs, players[i].wickets, players[i].matchesPlayed);
                flag++;
                // printf("Player Found - Jersey Number: %d, Runs: %d, Wickets: %d, Matches: %d\n",players[i].jerseyNumber, players[i].runs, players[i].wickets, players[i].matchesPlayed);
                // return;
            }
        }
        if(flag>0){
            printf("Search by their jersey number : ");
                scanf("%d",&jerseyNumber);
                for(int i=0;i<sizeof(playerName);i++){
                    if(playerName[i].jerseyNumber==jerseyNumber){
                    printf("Player Found - Runs : %d , Wickets : %d, Matches : %d\n",playerName[i].runs,playerName[i].wickets,playerName[i].matchesPlayed);
                    return;
                }
                }
        }
        else{
            printf("Player not found!");
        }
        // for (int i = 0; i < playerCount; i++) {
        //     if (strcmp(players[i].name, name) == 0) {
        //         printf("Player Found: Jersey Number: %d, Runs: %d, Wickets: %d, Matches: %d\n",
        //             players[i].jerseyNumber, players[i].runs, players[i].wickets, players[i].matchesPlayed);
        //         return;
        //     }
        // }
        
    }
    else {
        printf("Invalid choice!\n");
    }
}
void updatePlayer(Player* players) {
    printf("=================== UPDATE PLAYER ===================\n");
    int jerseyNumber;
    printf("Enter Jersey Number of player to update: ");
    scanf("%d", &jerseyNumber);
    int choice;
    // int index;
    for (int i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jerseyNumber) {
            printf("Enter choice (1) to update runs (2) to update wickets (3) to update no of matches : ");
            scanf("%d",&choice);
            // index=i;
            if(choice==1){
                printf("Enter new Runs: ");
                scanf("%d", &players[i].runs);
            }
            else if(choice==2){
                printf("Enter new Wickets: ");
                scanf("%d", &players[i].wickets);
            }
            else if(choice==3){
                printf("Enter new Matches Played: ");
                scanf("%d", &players[i].matchesPlayed);
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
        printf("| %-13d | %-30s | %5d | %7d | %7d |\n",players[i].jerseyNumber,players[i].name,players[i].runs,players[i].wickets,players[i].matchesPlayed);
        // printf("Jersey Number: %d, Name: %s, Runs: %d, Wickets: %d, Matches: %d\n",players[i].jerseyNumber, players[i].name, players[i].runs, players[i].wickets, players[i].matchesPlayed);
    }
    printf("\n----------------------------------------------------------------------------------\n");
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
    printf("=================== TOP PLAYERS ===================\n");
    int choice;
    printf("Enter choice : (1) for displaying top players according to runs (2) for displaying top players according to wickets : ");
    scanf("%d",&choice);
    if(choice==1){
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
    printf("Top 3 players according to highest runs are : \n");
    for(int i=0;i<3;i++){
        printf("%s with runs %d\n",p[i].name,p[i].runs);
    }
    }
    else if(choice==2){
        int temp;
    for(int i=0;i<playerCount;i++){
        for(int j=i+1;j<playerCount;j++){
            if(p[i].wickets<p[j].wickets){
                temp=p[i].wickets;
                p[i].wickets=p[j].wickets;
                p[j].wickets=temp;
            }
        }
    }
    printf("Top 3 players according to highest wickets are : \n");
    for(int i=0;i<3;i++){
        printf("%s with wickets %d\n",p[i].name,p[i].wickets);
    }
    }
}
int main() {
    // Player players[MAXX];
    Player* players =(Player*)malloc(sizeof(Player));
    Player initialPlayers[] = {
        {18, "Virat Kohli", 4000,5,100},
        {93, "Bumrah", 1000, 150,40},
        {7, "MS Dhoni", 2000, 10,70},
        {45,"Rohit Sharma",3800,5,110},
        {33,"Hardik Pandya",2200,60,100},
        {63,"Suryakumar Yadav",2100,4,70},
        {01,"KL Rahul",3200,3,80},
        {13,"Virat Mohli",3000,5,40}
    };
    for (int i = 0; i < sizeof(initialPlayers) / sizeof(initialPlayers[0]); i++) {
        players[i] = initialPlayers[i];
    }
    playerCount = sizeof(initialPlayers) / sizeof(initialPlayers[0]);
    // players=(Player*) {
    //     {10, "Alice", 2500, 50, 75},
    //     {12, "Bob", 1500, 30, 45},                    this gives error
    //     {7, "Charlie", 3000, 75, 90}
    // };

    // players[0] = (Player){10, "Alice", 2500, 50, 75};
    // players[1] = (Player){12, "Bob", 1500, 30, 45};
    // players[2] = (Player){7, "Charlie", 3000, 75, 90};
    
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
