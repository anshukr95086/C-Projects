#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

// Structure defining

struct Book
{
  int id;
  char title[100];
  char author[100];
  char issueDate[11];
  int available;
};

// all feature declaration
void addBooks(struct Book Library[], int *count);
void displayBooks(struct Book Library[], int count);
void searchBooks(struct Book Library[], int count);
void issueBooks(struct Book Library[], int count);

int main()
{
  struct Book Library[MAX_BOOKS];
  int count = 0;
  int choice;
  while(1)
  {
    printf("\nLibrary Management System\n");
    printf("1. Add Book\n");
    printf("2. Display All Book\n");
    printf("3. Search Book\n");
    printf("4. Issue Book\n");
    printf("5. Exit\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice){
        case(1) :
             addBooks(Library, &count);
             break;
        case(2):
             displayBooks(Library, count);
             break;
        case(3):
             searchBooks(Library, count);
             break;
        case(4):
             issueBooks(Library, count);
             break;
        case 5:
             printf("Exiting the Program\n");
             break;
        default:
             printf("Invalid choice\n");
    }
  }

  return 0;
}

// Adding Books
void addBooks(struct Book Library[], int *count)
{
  if (*count > MAX_BOOKS)
  {
    printf("Library is Full!\nCant't add any more Books.\n");
  }
  else
  {
    printf("Enter Book id: ");
    scanf("%d", &Library[*count].id);
    printf("Enter Book title: ");
    scanf(" %[^\n]", Library[*count].title); // space is used to remove any white space before input and ^\n is used to take all inputs except new line character
    // we can also use fgets to do the same function but can't use %s b/c it will only take one word as input not many words
    printf("Enter Author Name: ");
    scanf(" %[^\n]", Library[*count].author);
    printf("Enter issue Date (DD/MM/YYYY): ");
    scanf("%s", Library[*count].issueDate);
    Library[*count].available = 1; // The book is available when added
    (*count)++;
    return;
  }
}

void displayBooks(struct Book Library[], int count)
{
  for (int i = 0; i < count; i++)
  {
    printf("Book id: %d\n", Library[count].id);
    printf("Title: %s\n", Library[count].title);
    printf("Author: %s\n", Library[count].author);
    printf("Issue Date: %s\n", Library[count].issueDate);
    printf("Available: %s\n", Library[count].available ? "Yes" : "No");
    return;
  }
}

void searchBooks(struct Book Library[], int count)
{
  int id;
  printf("\nEnter Book Id to Search: ");
  scanf("%d", &id);
  for (int i = 0; i < count; i++)
  {
    if(Library[i].id == id){
      printf("Book Found!!!");
      printf("Book Id: %d\n", Library[i].id);
      printf("Title: %s\n", Library[i].title);
      printf("Author: %s\n", Library[i].author);
      printf("Book Added on Date: %s\n", Library[i].issueDate);
      printf("Available: %s\n", Library[i].available ? "Yes" : "No");
      return;
    }
  }
  printf("Book with Id: %d not found!!!\n", id);
}
