/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:06:29 by slouham           #+#    #+#             */
/*   Updated: 2024/12/19 17:58:41 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool Contact::isEmpty() const
{
    return first_name.empty() && last_name.empty() && nickname.empty();
}

std::string Contact::get_first_name() const {
    return first_name;
}

std::string Contact::get_last_name() const {
    return last_name;
}

std::string Contact::get_nickname() const {
    return nickname;
}

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

Contact::~Contact() 
{
    
}

void Contact::set_contact()
{
    
    std::cout << "Enter First Name: ";
    std::getline(std::cin, first_name);
    if (std::cin.eof())
        std::exit(0);
    while (first_name.empty())
    {
        if (std::cin.eof())
            std::exit(0);
        std::cout << "Cannot add empty argument" << std::endl;
        std::cout << "Enter First Name: ";
        std::getline(std::cin, first_name);
    }
   
    std::cout << "Enter Last Name: ";
    std::getline(std::cin, last_name);
    if (std::cin.eof())
        std::exit(0);
    while (last_name.empty())
    {
        if (std::cin.eof())
            std::exit(0);
        std::cout << "Cannot add empty argument" << std::endl;
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, last_name);
    }

    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nickname);
    if (std::cin.eof())
        std::exit(0);
    while (nickname.empty())
    {
        if (std::cin.eof())
            std::exit(0);
        std::cout << "Cannot add empty argument" << std::endl;
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, nickname);
    }

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, phone_number);
    if (std::cin.eof())
        std::exit(0);
    while (phone_number.empty())
    {
        if (std::cin.eof())
            std::exit(0);
        std::cout << "Cannot add empty argument" << std::endl;
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, phone_number);
    }

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, darkest_secret);
    if (std::cin.eof())
        std::exit(0);
    while (darkest_secret.empty())
    {
        if (std::cin.eof())
            std::exit(0);
        std::cout << "Cannot add empty argument" << std::endl;
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, darkest_secret);
    }
    std::cout << "added sucsessfully";
}

void Contact::display_contact() const
{
    std::cout << "\nFirst Name    : " << first_name << std::endl;
    std::cout << "Last Name     : " << last_name << std::endl;
    std::cout << "Nickname      : " << nickname << std::endl;
    std::cout << "Phone Number  : " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}