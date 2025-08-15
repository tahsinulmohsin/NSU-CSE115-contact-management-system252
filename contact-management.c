/*Project: Contact Management System
Group - 12

Group members:
Tahsinul Mohsin - 2524687642
Mohammad Raihan Mustakim Zian - 2524666042 */

#include <stdio.h>

// declaring structures
struct Contact
{
    char name[50];
    char phone[50];
    char email[50];
} contact;

// Function declaration
void addContact(void);
void displayContact(void);
void menu(void);

int main(void)
{
    menu();
    return 0;
}

// Function Definition
void addContact(void)
{
    // file creation with pointers
    FILE *file;
    file = fopen("contact-book.txt", "a"); // appending data in the file
    // control statement for file handling
    if (file == NULL)
    {
        printf("SORRY! FILE DOES NOT EXIST OR COULD NOT BE CREATED!");
    }

    else
    {
        printf("The contact book is opened \n \n");

        struct Contact contact;

        printf("Enter Name: ");
        fgets(contact.name, sizeof contact.name, stdin);

        printf("Enter Phone: ");
        fgets(contact.phone, sizeof contact.phone, stdin);

        printf("Enter Email: ");
        fgets(contact.email, sizeof contact.email, stdin);

        // writing to the file
        fprintf(file, "%s%s%s\n", contact.name, contact.phone, contact.email);
        fclose(file);
        printf("Contact succesfully added!! \n \n");
    }
}

void displayContact(void)
{

    FILE *file;
    file = fopen("contact-book.txt", "r"); // appending data in the file
    // control statement for file handling
    if (file == NULL)
    {
        printf("SORRY! FILE DOES NOT EXIST OR COULD NOT BE CREATED!");
    }

    else
    {
        printf("\nContacts: \n");

        while (fscanf(file, " %[^\n] %[^\n] %[^\n]", contact.name, contact.phone, contact.email) != EOF)
        {
            printf("Name: %s\nPhone: %s\nEmail: %s\n\n\n", contact.name, contact.phone, contact.email);
        }

        fclose(file);
    }
}

void menu(void)
{
    int choice;
    do
    {

        printf("Welcome to the Basic Contact Management System Software. \n");
        printf("This program is developed by two noob freshers from the 252 batch at NSU!\n\n");
        printf("Type the corresponding number in the menu to run your desired operation and press Enter\n\n");
        printf("1. Add a Contact\n");
        printf("2. Display contacts\n");
        printf("3. Nah, I will rather exit this program\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addContact();
            break;

        case 2:
            displayContact();
            break;

        case 3:
            printf("Exiting the program. Good Bye!");
            break;

        default:
            printf("INVALID CHOICE!!! Please try again! \n");
        }

    } while (choice != 3);
}






