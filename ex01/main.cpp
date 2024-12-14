/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:46:36 by slouham           #+#    #+#             */
/*   Updated: 2024/12/14 11:30:05 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    
    std::cout << GREEN << "Welcome to your PhoneBook" << RESET << std::endl;
    
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
        else if (command == "EXIT" || std::cin.eof())
        {
            std::cout << "\nExiting PhoneBook...\nGoodbye" << std::endl;
            break;
        }
        else
            std::cout << RED << "Invalid command. Please try again." << RESET << std::endl;
    }
    return (0);
}
