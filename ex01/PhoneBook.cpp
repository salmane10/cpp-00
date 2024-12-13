/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:47:58 by slouham           #+#    #+#             */
/*   Updated: 2024/12/13 23:24:03 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
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
    for (int i = 0; i < total_contact; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        array[i].get_contact();
    }
    std::cout << "\nEnter contact index: ";
    int index;
    std::cin >> index;
    if (index <= 0 || index > total_contact)
        std::cout << "Invalid index!" << std::endl;
    else
        array[index - 1].get_contact();
}
