/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:52 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/09 12:47:09 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"
class PhoneBook
{
    private :
        Contact contacts[8];
    public :
        void printIntro();
        void addIinfo();
        void search();
};

#endif



