/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:52 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/08 10:00:30 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
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



