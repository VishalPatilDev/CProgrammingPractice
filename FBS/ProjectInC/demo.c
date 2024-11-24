#include<stdio.h>
typedef struct{
    int jerNo;
    char name[50];
    int runs;
    int wickets;
    int nOfMatches;
}Player;
int playerCount;
void addPlayer(Player *p){
    Player newPlayer;
    printf("Enter jersey number : ");
    scanf("%d",&newPlayer.jerNo);
    getchar();
    printf("Enter Player name : ");
    fgets(newPlayer.name,sizeof(newPlayer.name),stdin);
    printf("Enter player runs : ");
    scanf("%d",&newPlayer.runs);
    printf("Enter player wickets : ");
    scanf("%d",&newPlayer.wickets);
    printf("Enter player matches played : ");
    scanf("%d",&newPlayer.nOfMatches);
    p[playerCount++]=newPlayer;
    printf("Player added successfully !\n");
}
void displayAllPlayers(Player* p){
    for(int i=0;i<playerCount;i++){
        printf("Player jerno : %d\n",p[i].jerNo);
        printf("Player name : %s\n",p[i].name);
        printf("Player runs : %d\n",p[i].runs);
        printf("Player wickets : %d\n",p[i].wickets);
        printf("Player matches played : %d\n",p[i].nOfMatches);
    }
}


void removePlayer(Player* p ){
    int jno;
    printf("Enter jerno to remove : ");
    scanf("%d",&jno);
    for(int i=0;i<playerCount;i++){
        if(p[i].jerNo==jno){
            p[i]=p[i+1];
            break;
        }
    }
    playerCount=playerCount-1;
    printf("player removed successfully !");
}

void displayTopPlayers(Player *p){
    int minRuns = p[0].runs, maxRuns = p[0].runs;
    int minWickets = p[0].wickets, maxWickets = p[0].wickets;
    int minRunsIndex = 0, maxRunsIndex = 0;
    int minWicketsIndex = 0, maxWicketsIndex = 0;

    for (int i = 0; i < playerCount; i++) {
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

void searchPlayer(Player* p){
    int choice;
    printf("Enter choice : ");
    scanf("%d",&choice);
    if(choice==1){
        int jno;
        printf("Enter jersey number : ");
        scanf("%d",&jno);
        for(int i=0;i<playerCount;i++){
            if(p[i].jerNo==jno){
                printf("Player found : %s , Runs : %d,Wickets : %d,Matches : %d\n",p[i].name,p[i].runs,p[i].wickets,p[i].nOfMatches);
                break;
            }
        }
        printf("Player not found!\n");

    }
    else if(choice==2){
        char n[50];
        printf("Enter name : ");
        getchar();
        fgets(n,sizeof(n),stdin);
        for(int i=0;i<playerCount;i++){
            if(strcmp(p[i].name,n)==0){
                printf("Player Found: Jersey Number: %d, Runs: %d, Wickets: %d, Matches: %d\n",p[i].jerNo, p[i].runs, p[i].wickets, p[i].nOfMatches);
                break;
            }
        }

    }
}
void main(){
    Player p[100];
    int choice;
    while(1){
    printf("Enter choice : ");
    scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addPlayer(p);
            break;
        case 2:
            displayAllPlayers(p);
            break;
        case 3:
            removePlayer(p);
            break;
        case 4:
            searchPlayer(p);
            break;
        case 5:
            displayTopPlayers(p);
            break;
        default:
            break;
        }
    }
}