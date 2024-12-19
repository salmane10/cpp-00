/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:48:27 by slouham           #+#    #+#             */
/*   Updated: 2024/12/19 17:54:57 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <limits>

class PhoneBook
{
    private:
        Contact array[8];
        int total_contact;

    public:
        PhoneBook();
        void add_new();
        void search();
};

#endif
