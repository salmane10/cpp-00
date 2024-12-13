/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:06:29 by slouham           #+#    #+#             */
/*   Updated: 2024/12/13 23:25:38 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {
    // Initialize member variables if needed
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

Contact::~Contact() {
    // Any cleanup if necessary, although nothing is required here as of now
}

void Contact::set_contact()
{
    std::cout << "Enter First Name: ";
    std::getline(std::cin, first_name);

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, last_name);

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, phone_number);

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, darkest_secret);
}

void Contact::get_contact()
{
    std::cout << first_name << " | "
             << last_name << " | "
             << nickname << std::endl;
                
}