#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "books.dat"

typedef struct {
    int id;
    char title[100];
    char author[100];
    int quantity;
} Book;

// Function declarations
void addBook();
void displayBooks();
void searchBook();
void deleteBook();
void updateBook();

int main() {
    int choice;
    while (1) {
        printf("\n==== LIBRARY MANAGEMENT SYSTEM ====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: deleteBook(); break;
            case 6: exit(0);
            default: printf("Invalid option!\n");
        }
    }
    return 0;
}

void addBook() {
    FILE *fp = fopen(FILE_NAME, "ab");
    Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar();

    printf("Enter Book Title: ");
    fgets(b.title, 100, stdin);
    b.title[strcspn(b.title, "\n")] = 0;

    printf("Enter Author Name: ");
    fgets(b.author, 100, stdin);
    b.author[strcspn(b.author, "\n")] = 0;

    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    fwrite(&b, sizeof(Book), 1, fp);
    fclose(fp);

    printf("Book added successfully!\n");
}

void displayBooks() {
    FILE *fp = fopen(FILE_NAME, "rb");
    Book b;

    if (!fp) {
        printf("No books found.\n");
        return;
    }

    printf("\n--- BOOK LIST ---\n");
    while (fread(&b, sizeof(Book), 1, fp)) {
        printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\n\n",
               b.id, b.title, b.author, b.quantity);
    }
    fclose(fp);
}

void searchBook() {
    FILE *fp = fopen(FILE_NAME, "rb");
    Book b;
    int id, found = 0;

    if (!fp) {
        printf("No books found.\n");
        return;
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(Book), 1, fp)) {
        if (b.id == id) {
            printf("\nBook Found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\n",
                   b.id, b.title, b.author, b.quantity);
            found = 1;
            break;
        }
    }

    if (!found) printf("Book not found.\n");

    fclose(fp);
}

void deleteBook() {
    FILE *fp = fopen(FILE_NAME, "rb");
    FILE *temp = fopen("temp.dat", "wb");
    Book b;
    int id, found = 0;

    if (!fp) {
        printf("No books found.\n");
        return;
    }

    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(Book), 1, fp)) {
        if (b.id != id) {
            fwrite(&b, sizeof(Book), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found)
        printf("Book deleted successfully!\n");
    else
        printf("Book not found.\n");
}

void updateBook() {
    FILE *fp = fopen(FILE_NAME, "rb+");
    Book b;
    int id, found = 0;

    if (!fp) {
        printf("No books found.\n");
        return;
    }

    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(Book), 1, fp)) {
        if (b.id == id) {
            printf("Enter new Title: ");
            getchar();
            fgets(b.title, 100, stdin);
            b.title[strcspn(b.title, "\n")] = 0;

            printf("Enter new Author: ");
            fgets(b.author, 100, stdin);
            b.author[strcspn(b.author, "\n")] = 0;

            printf("Enter new Quantity: ");
            scanf("%d", &b.quantity);

            fseek(fp, -(long)sizeof(Book), SEEK_CUR);
            fwrite(&b, sizeof(Book), 1, fp);

            found = 1;
            printf("Book updated successfully!\n");
            break;
        }
    }

    if (!found) printf("Book not found.\n");

    fclose(fp);
}