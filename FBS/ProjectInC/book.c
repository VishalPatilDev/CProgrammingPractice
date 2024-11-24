#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int bookID;
    char bookName[50];
    char authorName[50];
    char category[30];
    float price;
    float rating;
} Book;

Book books[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Book limit reached!\n");
        return;
    }
    
    Book newBook;
    printf("Enter Book ID: ");
    scanf("%d", &newBook.bookID);
    printf("Enter Book Name: ");
    scanf(" %[^\n]", newBook.bookName);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", newBook.authorName);
    printf("Enter Category: ");
    scanf(" %[^\n]", newBook.category);
    printf("Enter Price: ");
    scanf("%f", &newBook.price);
    printf("Enter Rating: ");
    scanf("%f", &newBook.rating);
    
    books[bookCount++] = newBook;
    printf("Book added successfully!\n");
}

void removeBook() {
    int bookID;
    printf("Enter Book ID of book to remove: ");
    scanf("%d", &bookID);
    
    for (int i = 0; i < bookCount; i++) {
        if (books[i].bookID == bookID) {
            books[i] = books[bookCount - 1]; // Replace with the last book
            bookCount--;
            printf("Book removed successfully!\n");
            return;
        }
    }
    
    printf("Book not found!\n");
}

void searchBook() {
    char name[50];
    int bookID;
    printf("Search by (1) Book ID (2) Book Name: ");
    int choice;
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter Book ID: ");
        scanf("%d", &bookID);
        
        for (int i = 0; i < bookCount; i++) {
            if (books[i].bookID == bookID) {
                printf("Book Found: %s, Author: %s, Category: %s, Price: %.2f, Rating: %.2f\n",
                    books[i].bookName, books[i].authorName, books[i].category, books[i].price, books[i].rating);
                return;
            }
        }
        printf("Book not found!\n");
    } else if (choice == 2) {
        printf("Enter Book Name: ");
        scanf(" %[^\n]", name);
        
        for (int i = 0; i < bookCount; i++) {
            if (strcmp(books[i].bookName, name) == 0) {
                printf("Book Found: ID: %d, Author: %s, Category: %s, Price: %.2f, Rating: %.2f\n",
                    books[i].bookID, books[i].authorName, books[i].category, books[i].price, books[i].rating);
                return;
            }
        }
        printf("Book not found!\n");
    } else {
        printf("Invalid choice!\n");
    }
}

void showAuthorsBooks() {
    char authorName[50];
    printf("Enter Author Name: ");
    scanf(" %[^\n]", authorName);
    
    printf("Books by %s:\n", authorName);
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].authorName, authorName) == 0) {
            printf("ID: %d, Book Name: %s, Category: %s, Price: %.2f, Rating: %.2f\n",
                books[i].bookID, books[i].bookName, books[i].category, books[i].price, books[i].rating);
        }
    }
}

void showCategoryBooks() {
    char category[30];
    printf("Enter Category: ");
    scanf(" %[^\n]", category);
    
    printf("Books in category '%s':\n", category);
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(books[i].category, category) == 0) {
            printf("ID: %d, Book Name: %s, Author: %s, Price: %.2f, Rating: %.2f\n",
                books[i].bookID, books[i].bookName, books[i].authorName, books[i].price, books[i].rating);
        }
    }
}

void updateBook() {
    int bookID;
    printf("Enter Book ID of book to update: ");
    scanf("%d", &bookID);
    
    for (int i = 0; i < bookCount; i++) {
        if (books[i].bookID == bookID) {
            printf("Enter new Price: ");
            scanf("%f", &books[i].price);
            printf("Enter new Rating: ");
            scanf("%f", &books[i].rating);
            printf("Book data updated successfully!\n");
            return;
        }
    }
    
    printf("Book not found!\n");
}

int comparePrice(const void *a, const void *b) {
    return ((Book*)b)->price - ((Book*)a)->price; // Sort in descending order
}

int compareRating(const void *a, const void *b) {
    return ((Book*)b)->rating - ((Book*)a)->rating; // Sort in descending order
}

void displayTopBooks() {
    if (bookCount == 0) {
        printf("No books available.\n");
        return;
    }

    printf("Top 3 Books by Price:\n");
    qsort(books, bookCount, sizeof(Book), comparePrice);
    for (int i = 0; i < 3 && i < bookCount; i++) {
        printf("%d. ID: %d, Book Name: %s, Price: %.2f\n", i + 1, books[i].bookID, books[i].bookName, books[i].price);
    }

    printf("Top 3 Books by Rating:\n");
    qsort(books, bookCount, sizeof(Book), compareRating);
    for (int i = 0; i < 3 && i < bookCount; i++) {
        printf("%d. ID: %d, Book Name: %s, Rating: %.2f\n", i + 1, books[i].bookID, books[i].bookName, books[i].rating);
    }
}

void displayAllBooks() {
    if (bookCount == 0) {
        printf("No books available.\n");
        return;
    }
    
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Book Name: %s, Author: %s, Category: %s, Price: %.2f, Rating: %.2f\n",
               books[i].bookID, books[i].bookName, books[i].authorName, books[i].category, books[i].price, books[i].rating);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nBook Management System\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book Data\n");
        printf("7. Display Top Books\n");
        printf("8. Display All Books\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                removeBook();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                showAuthorsBooks();
                break;
            case 5:
                showCategoryBooks();
                break;
            case 6:
                updateBook();
                break;
            case 7:
                displayTopBooks();
                break;
            case 8:
                displayAllBooks();
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
