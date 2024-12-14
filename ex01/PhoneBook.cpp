/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:47:58 by slouham           #+#    #+#             */
/*   Updated: 2024/12/14 11:43:28 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

static int total_contact = 0;

void PhoneBook::add_new()
{
    if (total_contact >= 8)
    {
        std::cout << "Warning: PhoneBook is full." << std::endl;
    }
    else
    {
        std::cout << "Adding a new contact..." << std::endl;
        array[total_contact].set_contact();
        total_contact++;
    }
}

void PhoneBook::search()
{   
    if (total_contact == 0)
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return;
    }
    
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    
    for (int i = 0; i < total_contact; i++)
    {
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
            std::cout << std::setw(10) << array[i].get_nickname().substr(0, 9) + "."  << std::endl;
        else
            std::cout << std::setw(10) << array[i].get_nickname() << std::endl;
    }
    int index;
    std::cout << "Enter contact index: ";
    std::cin >> index;
    
    // if (index < 0 || index > total_contact)
    // {
        // std::cout << "Invalid index. Try again!" << std::endl;
    // }
    if (index >= 0 && index <= total_contact)
        array[index].display_contact();
    else
    {
        std::cout << "Invalid index!" << std:: endl;
    }
}
