#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100

typedef struct {
    char title[100];
    char director[50];
    int releaseYear;
    char genre[30];
} Movie;

void addMovie(Movie movies[], int *count) {
    if (*count < MAX_MOVIES) {
        printf("Enter movie title: ");
        getchar(); // Clear the newline character from input buffer
        fgets(movies[*count].title, sizeof(movies[*count].title), stdin);
        movies[*count].title[strcspn(movies[*count].title, "\n")] = 0; // Remove newline
        
        printf("Enter director: ");
        fgets(movies[*count].director, sizeof(movies[*count].director), stdin);
        movies[*count].director[strcspn(movies[*count].director, "\n")] = 0;

        printf("Enter release year: ");
        scanf("%d", &movies[*count].releaseYear);
        
        printf("Enter genre: ");
        getchar(); 
        fgets(movies[*count].genre, sizeof(movies[*count].genre), stdin);
        movies[*count].genre[strcspn(movies[*count].genre, "\n")] = 0;

        (*count)++;
        printf("Movie added successfully!\n");
    } else {
        printf("Movie database is full!\n");
    }
}

void searchMovie(const Movie movies[], int count) {
    char title[100];
    printf("Enter movie title to search: ");
    getchar();
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0; // Remove newline

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, title) == 0) {
            printf("Movie found:\n");
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].releaseYear);
            printf("Genre: %s\n", movies[i].genre);
            return;
        }
    }
    printf("Movie not found.\n");
}

void updateMovie(Movie movies[], int count) {
    char title[100];
    printf("Enter movie title to update: ");
    getchar();
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0; // Remove newline

    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].title, title) == 0) {
            printf("Updating movie details:\n");

            printf("Enter new director: ");
            fgets(movies[i].director, sizeof(movies[i].director), stdin);
            movies[i].director[strcspn(movies[i].director, "\n")] = 0;

            printf("Enter new release year: ");
            scanf("%d", &movies[i].releaseYear);
            
            printf("Enter new genre: ");
            getchar();
            fgets(movies[i].genre, sizeof(movies[i].genre), stdin);
            movies[i].genre[strcspn(movies[i].genre, "\n")] = 0;

            printf("Movie updated successfully!\n");
            return;
        }
    }
    printf("Movie not found.\n");
}

int main() {
    Movie movies[MAX_MOVIES];
    int count = 0;
    int choice;

    while (1) {
        printf("\nMovie Database Menu:\n");
        printf("1. Add Movie\n");
        printf("2. Search Movie\n");
        printf("3. Update Movie\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies, &count);
                break;
            case 2:
                searchMovie(movies, count);
                break;
            case 3:
                updateMovie(movies, count);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
