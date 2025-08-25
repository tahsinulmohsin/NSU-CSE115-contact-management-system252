/* Project: Contact Management System
Group - 12

Group members:
Tahsinul Mohsin - 2524687642
Mohammad Raihan Mustakim Zian - 2524666042 */

#include <stdio.h>
#include <conio.h>
#include <string.h>   // needed for strcmp, strstr, fgets work

// declaring structures
struct Contact
{
    char name[50];
    char phone[50];
    char email[50];
} contact;

// Function declarations
void addContact(void);
void showAllContacts(void);     
void searchContact(void);
void deleteContact(void);       
void menu(void);

int main(void)
{
    menu();
    getch();
    return 0;
}

// Add a contact 
void addContact(void)
{
    FILE *file;
    file = fopen("contact-book.txt", "a"); // append mode
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

        // Keep same simple format; extra blank line between records is fine
        fprintf(file, "%s%s%s\n", contact.name, contact.phone, contact.email);
        fclose(file);
        printf("Contact succesfully added!! \n \n");
    }
}

// Show all contacts (same logic as your displayContact)
void showAllContacts(void)
{
    FILE *file;
    file = fopen("contact-book.txt", "r");
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

// Search (simple, case-sensitive search)
void searchContact(void)
{
    FILE *file = fopen("contact-book.txt", "r");
    if (file == NULL)
    {
        printf("SORRY! FILE DOES NOT EXIST OR COULD NOT BE CREATED!\n");
        return;
    }

    char query[50];
    printf("\nEnter search text (name/phone/email): ");
    fgets(query, sizeof(query), stdin);

    // remove trailing newline from query
    int len = 0;
    while (query[len] != '\0') len++;
    if (len > 0 && query[len - 1] == '\n') query[len - 1] = '\0';

    int found = 0;
    while (fscanf(file, " %[^\n] %[^\n] %[^\n]", contact.name, contact.phone, contact.email) != EOF)
    {
        if (strstr(contact.name, query) != NULL ||
            strstr(contact.phone, query) != NULL ||
            strstr(contact.email, query) != NULL)
        {
            if (!found) printf("\nMatches:\n\n");
            found = 1;
            printf("Name: %s\nPhone: %s\nEmail: %s\n\n", contact.name, contact.phone, contact.email);
        }
    }

    if (!found) printf("\nNo contacts matched \"%s\".\n\n", query);

    fclose(file);
}

// DELETE a contact by exact Name OR exact Phone (simple, case-sensitive)
void deleteContact(void)
{
    FILE *in = fopen("contact-book.txt", "r");
    if (in == NULL)
    {
        printf("SORRY! FILE DOES NOT EXIST OR COULD NOT BE CREATED!\n");
        return;
    }

    FILE *out = fopen("contact-book.tmp", "w");
    if (out == NULL)
    {
        fclose(in);
        printf("ERROR: Could not create a temporary file.\n");
        return;
    }

    char key[50];
    int mode = 0;

    // Choose match mode (1 = by Name, 2 = by Phone)
    printf("\nDelete by:\n");
    printf("1. Exact Name\n");
    printf("2. Exact Phone\n");
    printf("Enter choice: ");
    if (scanf("%d", &mode) != 1) { mode = 0; }
    getchar(); // consume leftover newline

    if (mode != 1 && mode != 2)
    {
        printf("Invalid choice. Aborting delete.\n\n");
        fclose(in);
        fclose(out);
        remove("contact-book.tmp");
        return;
    }

    // Read the key
    if (mode == 1) printf("Enter EXACT Name to delete: ");
    else           printf("Enter EXACT Phone to delete: ");
    fgets(key, sizeof(key), stdin);
    // strip trailing newline
    int klen = 0;
    while (key[klen] != '\0') klen++;
    if (klen > 0 && key[klen - 1] == '\n') key[klen - 1] = '\0';

    int deleted_count = 0;

    // Copy all non-matching contacts to temp file
    while (fscanf(in, " %[^\n] %[^\n] %[^\n]", contact.name, contact.phone, contact.email) != EOF)
    {
        int is_match = 0;
        if (mode == 1 && strcmp(contact.name, key) == 0)  is_match = 1;
        if (mode == 2 && strcmp(contact.phone, key) == 0) is_match = 1;

        if (is_match)
        {
            deleted_count++;
            // skip writing this contact (i.e., delete it)
        }
        else
        {
            // Write back in a clean, simple format (3 lines + blank line)
            // Works fine with your fscanf pattern because of leading space in format string
            fprintf(out, "%s\n%s\n%s\n\n", contact.name, contact.phone, contact.email);
        }
    }

    fclose(in);
    fclose(out);

    // Replace original with temp
    remove("contact-book.txt");
    if (rename("contact-book.tmp", "contact-book.txt") != 0)
    {
        printf("ERROR: Could not update the contact file.\n");
    }

    if (deleted_count > 0)
        printf("\nDeleted %d contact(s).\n\n", deleted_count);
    else
        printf("\nNo contact matched \"%s\". Nothing deleted.\n\n", key);
}

//Menu
void menu(void)
{
    int choice;
    do
    {
        printf("Welcome to the Basic Contact Management System Software. \n");
        printf("This program is developed by two noob freshers from the 252 batch at NSU!\n\n");
        printf("Type the corresponding number in the menu to run your desired operation and press Enter\n\n");
        printf("1. Add a Contact\n");
        printf("2. Show all contacts\n");
        printf("3. Search contacts\n");
        printf("4. Delete a contact\n");
        printf("5. Nah, I will rather exit this program\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume leftover newline

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            showAllContacts();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            deleteContact();
            break;
        case 5:
            printf("Exiting the program. Good Bye!");
            break;
        default:
            printf("INVALID CHOICE!!! Please try again! \n");
        }

    } while (choice != 5);
}
