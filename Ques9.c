/*
Q9. Library Book Management
*/

#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int totalCopies;
    int availableCopies;
};

int main()
{
    struct Book books[50];
    int count = 0;
    int choice, id;

    do
    {
        printf("\n\n1. Add Book");
        printf("\n2. Search Book");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Display Unavailable Books");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter book ID: ");
            scanf("%d", &books[count].id);

            printf("Enter title: ");
            scanf("%s", books[count].title);

            printf("Enter author: ");
            scanf("%s", books[count].author);

            printf("Enter total copies: ");
            scanf("%d", &books[count].totalCopies);

            books[count].availableCopies = books[count].totalCopies;

            count++;

            printf("Book added successfully.");
        }

        else if(choice == 2)
        {
            printf("Enter book ID: ");
            scanf("%d", &id);

            for(int i = 0; i < count; i++)
            {
                if(books[i].id == id)
                {
                    printf("\nTitle: %s", books[i].title);
                    printf("\nAuthor: %s", books[i].author);
                    printf("\nAvailable copies: %d", books[i].availableCopies);
                    break;
                }
            }
        }

        else if(choice == 3)
        {
            printf("Enter book ID: ");
            scanf("%d", &id);

            for(int i = 0; i < count; i++)
            {
                if(books[i].id == id)
                {
                    if(books[i].availableCopies > 0)
                    {
                        books[i].availableCopies--;
                        printf("Book issued.");
                    }
                    else
                    {
                        printf("Book is unavailable.");
                    }
                    break;
                }
            }
        }

        else if(choice == 4)
        {
            printf("Enter book ID: ");
            scanf("%d", &id);

            for(int i = 0; i < count; i++)
            {
                if(books[i].id == id)
                {
                    if(books[i].availableCopies < books[i].totalCopies)
                    {
                        books[i].availableCopies++;
                        printf("Book returned.");
                    }
                    break;
                }
            }
        }

        else if(choice == 5)
        {
            printf("\nUnavailable Books:");

            for(int i = 0; i < count; i++)
            {
                if(books[i].availableCopies == 0)
                {
                    printf("\n%d - %s", books[i].id, books[i].title);
                }
            }
        }

    } while(choice != 6);

    return 0;
}
