/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:47:58 by slouham           #+#    #+#             */
/*   Updated: 2024/12/19 20:43:18 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() :  total_contact(0) {}

void PhoneBook::add_new()
{
    if (total_contact < 8)
    {
        std::cout << "Adding Contact..." << std::endl;
        array[total_contact].set_contact();
        total_contact++;
    }
    else
    {
        int overwrite_index = total_contact % 8;
        std::cout << "Warning: PhoneBook is full" << std::endl; 
        array[overwrite_index].set_contact();
        total_contact++;
    }
}


void PhoneBook::search()
{   
    if (total_contact == 0)
    {
        std::cout << "PhoneBook is empty !";
        return;
    }
    std::cout << "____________________________________________" << std::endl;
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|" << std::endl;

    int max_contact = (total_contact < 8) ? total_contact : 8;
    
    for (int i = 0; i < total_contact; i++)
    {
        if (i == 8) break;
        
        std::cout << std::setw(10) << i << "|";
        
        if (array[i].get_first_name().length() > 10)
            std::cout << std::setw(10) << array[i].get_first_name().substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << array[i].get_first_name() << "|";

        if (array[i].get_last_name().length() > 10)
            std::cout << std::setw(10) << array[i].get_last_name().substr(0, 9) + "."  << "|";
        else
            std::cout << std::setw(10) << array[i].get_last_name() << "|";

        if (array[i].get_nickname().length() > 10)
            std::cout << std::setw(10) << array[i].get_nickname().substr(0, 9) + "."  << "|" << std::endl;
        else
            std::cout << std::setw(10) << array[i].get_nickname() << "|" << std::endl;
    }
    
    int index;
     while (true)
    {
        std::cout << "\nEnter contact index: ";
        std::string line;
        std::getline(std::cin, line);
        if (std::cin.eof())
            std::exit(0);

        if (line.empty())
        {
            std::cout << "No input provided !";
            continue;
        }
        
        if (line.length() != 1 || !isdigit(line[0]))
        {
            std::cout << "Invalid: accept only and one digit !";
            continue;
        }
        index = std::atoi(line.c_str());

        if (index >= 0 && index < max_contact)
        {
            array[index].display_contact();
            break;
        }
        else
        {
            std::cout << "No contact found! Please try again";
        }
    }
}
