#include <iostream>
#include <string>

int main(void)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;
    std::cout << "Enter your data in following fields (5 lines): ";
    std::cout << "First name, Last name, Nickname, Phone No, Darkest Secret" << std::endl;
    std::getline (std::cin, first_name, '\n');
    std::getline (std::cin, last_name, '\n');
    std::getline (std::cin, nickname, '\n');
    std::getline (std::cin, phone_number, '\n');
    std::getline (std::cin, darkest_secret, '\n');
    std::cout << "FN check: " << first_name << std::endl;
    // std::cin >> first_name >> last_name >> nickname >> phone_number >> darkest_secret;
    // Obj.A[index].set_data(first_name, last_name, nickname, darkest_secret, phone_number);
    std::cout << "LN check: " << last_name << std::endl;
    std::cout << "Nick check: " << nickname << std::endl;
    std::cout << "Secret: " << darkest_secret << std::endl;
    return 0;
}