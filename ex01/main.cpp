/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:46:36 by slouham           #+#    #+#             */
/*   Updated: 2024/12/13 23:05:36 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    
    std::cout << "Welcome to your PhoneBook" << std::endl;
    while (true)
    {
        std::cout << "\nEnter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            phonebook.add_new();
        }
        else if (command == "SEARCH")
        {
            phonebook.search();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting PhoneBook. Goodbye" << std::endl;
            break;
        }
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return (0);
}