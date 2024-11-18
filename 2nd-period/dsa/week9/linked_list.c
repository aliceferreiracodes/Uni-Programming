#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Book_node {
    char *title;
    char *author;
    struct Book_node *next;
} Book_node;


Book_node *create_list(Book_node *start);// create list
void insert_book(Book_node *start); // insert book
void search_book(Book_node *start);// search
void show_info(Book_node *book); // show info
Book_node *delete_book(Book_node *start); // delete
void display_list(Book_node *start); // show all elements


int main() {

    Book_node *start = NULL;
    int option;

    do {
        printf("\n-> Options:\n");
        printf("1 - Add book to the list\n");
        printf("2 - Search book by title\n");
        printf("3 - Delete book\n");
        printf("4 - Show list\n");
        printf("5 - Leave\n");

        printf("\n-> Enter your option: ");
        scanf("%i", &option);
        getchar();
        
        switch (option) {
            case 1: 
                // insert book
                if (start == NULL) {
                    start = create_list(start);
                }
                else {
                    insert_book(start);
                }
                break;
            case 2: 
                // search book
                search_book(start);
                break;
            case 3:
                // delete book
                start = delete_book(start);
                break;
            case 4:
                // show list
                display_list(start);
                break;
            case 5:
                // leave
                printf("\n-> Program terminated.\n\n");
                break;
            default:
                // invalid option
                printf("\n-> This option is invalid.\n");
                break;
        }
    } while (option != 5);

    return 0;
}


void display_list(Book_node *start) {
    Book_node *ptr = start;

    if (ptr == NULL) {
        printf("\n-> The list is currently empty.\n");
        return;
    }

    printf("\n-> List of books: ");

    while (ptr != NULL) {
        show_info(ptr);
        ptr = ptr->next;
    }
}


void show_info(Book_node *book) {
    printf("\nTitle: %s\n", book->title);
    printf("Author: %s\n", book->author);
}


void search_book(Book_node *start) {
    char temp_title[MAX_SIZE];
    
    printf("\n-> Enter the title of the book you are looking for: ");
    if (fgets(temp_title, MAX_SIZE, stdin) != NULL) {
        size_t len = strlen(temp_title);

        if (len > 0 && temp_title[len - 1] == '\n') {
        temp_title[len - 1] = '\0';
        }
    }

    Book_node *ptr = start;

    while (ptr != NULL) {
        if (strcmp(ptr->title, temp_title) == 0) {
            printf("\n-> The book you are looking for was found! Here's its information:");
            show_info(ptr);
            return;
        }

        ptr = ptr->next;
    }

    printf("\n-> Unfortunately, the book you are looking for was not found.\n");
}


Book_node *create_list(Book_node *start) {
    char temp_title[MAX_SIZE];
    char temp_author[MAX_SIZE];
    
    printf("\n-> Enter the title of the book: ");
    if (fgets(temp_title, MAX_SIZE, stdin) != NULL) {
        size_t len = strlen(temp_title);

        if (len > 0 && temp_title[len - 1] == '\n') {
        temp_title[len - 1] = '\0';
        }
    }

    printf("\n-> Enter the name of the author: ");
    if (fgets(temp_author, MAX_SIZE, stdin) != NULL) {
        size_t len = strlen(temp_author);

        if (len > 0 && temp_author[len - 1] == '\n') {
        temp_author[len - 1] = '\0';
        }
    }


    Book_node *new_book;
    new_book = (Book_node *)malloc(sizeof(Book_node));
    new_book->title = strdup(temp_title);
    new_book->author = strdup(temp_author);

    new_book->next = start;
    start = new_book;

    return start;
}


void insert_book(Book_node *start) {
    char temp_title[MAX_SIZE];
    char temp_author[MAX_SIZE];
    
    printf("\n-> Enter the title of the book: ");
    fgets(temp_title, MAX_SIZE, stdin);
    temp_title[strlen(temp_title) - 1] = '\0';

    printf("\n-> Enter the name of the author: ");
    fgets(temp_author, MAX_SIZE, stdin);
    temp_author[strlen(temp_author) - 1] = '\0';

    Book_node *new_book;
    new_book = (Book_node *)malloc(sizeof(Book_node));
    new_book->title = strdup(temp_title);
    new_book->author = strdup(temp_author);

    Book_node *ptr = start;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = new_book;
    new_book->next = NULL;
}


Book_node *delete_book(Book_node *start) {
    char temp_title[MAX_SIZE];
    
    printf("\n-> Enter the title of the book you want to delete: ");
    if (fgets(temp_title, MAX_SIZE, stdin) != NULL) {
        size_t len = strlen(temp_title);
        if (len > 0 && temp_title[len - 1] == '\n') {
            temp_title[len - 1] = '\0';
        }
    }

    // Special case: deleting the first node
    if (start != NULL && strcmp(start->title, temp_title) == 0) {
        Book_node *temp = start;
        start = start->next;
        free(temp->title);
        free(temp->author);
        free(temp);
        printf("\n-> The book was successfully deleted.\n");
        return start;
    }

    Book_node *ptr = start;
    while (ptr != NULL && ptr->next != NULL) {
        if (strcmp(ptr->next->title, temp_title) == 0) {
            Book_node *temp = ptr->next;
            ptr->next = temp->next;
            free(temp->title);
            free(temp->author);
            free(temp);
            printf("\n-> The book was successfully deleted.\n");
            return start;
        }
        ptr = ptr->next;
    }

    printf("\n-> There is no book with such a title in the list.\n");
    return start;
}
