#include <iostream>
#include "PhoneContactBookADT.h"

int main()
{
    List Contacts;
    int position;
    string firstName;
    string lastName;
    string phoneNumber;
    int choice;

    enum {
        ShowAllContacts = 1,
        AddContacts,
        RemoveContacts,
        EditContacts,
        SearchContacts,
        Exit
    };

    bool exitProgram = false;

    while (!exitProgram) {
        cout << "Please choose what you'd like to do:\n"
        cout << "1. Show all currently listed contacts. \n"
        cout << "2. Add a contact to the database. \n"
        cout << "3. Remove a contact from the database. \n"
        cout << "4. Edit a contact that is in the database. \n"
        cout << "5. Search a contact in the database. \n"
        cout << "6. Exit the program. \n"

        switch (choice) {
            case ShowAllContacts:
              cout << "\n"
              Contacts.showAll()
              cout << "\n"
              break;

            case AddContacts:
              cout << "\nPlease input the contacts' first name: ";
              cin >> firstName;
              cout << "\nPlease input the contacts' last name: ";
              cin >> lastName;
              cout << "\nPlease input the the contacts' phonenumber: ";
              cin >> phoneNumber;
              Contacts.makeContact(firstName, lastName, phoneNumber);
              cout << "\n";
              break;
            case RemoveContacts:
              cout << "Enter the contact number you wish to delete from the database.";
              cin >> position;
              Contacts.deleteContact(position);
              cout << "\n";
              break;
            case EditContacts:
              cout << "\n";
              cout << "To edit contact please...\n";
              cout << "Input the first name of the contact:\n";
              cin >> firstName;
              cout << "Input the last name of the contact:\n";
              cin >> lastName;
              Contacts.showContact(firstName, lastName);
              cout << "Please input the new information.\n";
              cout << "Input the new first name of the contact:\n";
              cin >> firstName;
              cout << "Input the new last name of the contact:\n";
              cin >> lastName;
              cout << "Input the new phone number of the contact: \n";
              cin >> phoneNumber;
              Contacts.makeContact(firstName, lastName, phoneNumber);
              break;
            case SearchContacts:
              cout << "\n";
              cout << "To find the contact you seek...\n";
              cout << "Please input the first name of the contact you want to find:\n";
              cin >> firstName;
              cout  << "Please input the last name of the contact you want to find:\n";
              cin >> lastName;
              Contacts.searchName(firstName, lastName)
              break;
            case Exit:
              exitProgram = true;
              break;
            default:
              cout << "\n"
              cout << choice << " is not a valid option. Please rechoose."
              break;
        }
    }
    return 0;
}
