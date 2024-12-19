/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:46:36 by slouham           #+#    #+#             */
/*   Updated: 2024/12/19 17:57:06 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    
    std::cout << "Welcome to PhoneBook" << std::endl;
    
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
            std::cout << "\nGoodbye!" << std::endl;
            break;
        }
        else
            std::cout << "ERROR: invalid command! try again";
    }
    return (0);
}
