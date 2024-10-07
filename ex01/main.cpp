#include "PhoneBook.hpp"

int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            Contact newContact;
            std::string input;

            std::cout << "Enter First Name: ";
            std::getline(std::cin, input);
            newContact.setFirstName(input);

            std::cout << "Enter Last Name: ";
            std::getline(std::cin, input);
            newContact.setLastName(input);

            std::cout << "Enter Nickname: ";
            std::getline(std::cin, input);
            newContact.setNickname(input);

            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, input);
            newContact.setPhoneNumber(input);

            std::cout << "Enter Darkest Secret: ";
            std::getline(std::cin, input);
            newContact.setDarkestSecret(input);

            phonebook.addContact(newContact);

        } else if (command == "SEARCH") {
            phonebook.displayContacts();
            std::cout << "Enter the index of the contact to display: ";
            int index;
            std::cin >> index;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            phonebook.displayContactDetails(index);

        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command!" << std::endl;
        }
    }

    return 0;
}
