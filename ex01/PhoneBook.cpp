/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:45 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/03 18:26:05 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook :: printIntro()
{
    std :: cout << "Wellcome in My phoneBook ...\n";
    std :: cout << "enter : ADD | SEARCH | EXIT \n";
}

 void PhoneBook :: addIinfo()
 {
     static int i;
     if (i < 8)
     {
        contacts[i].fillData(i);
        i++;
     }
     else
     {
        contacts[8].fillData(8);
     }
 }
 
 void PhoneBook :: search()
{
    int i = 0;
    std :: cout << "+----------+----------+----------+----------+\n";
    std :: cout << "| id       |first name|last name |nick name |\n";
    std :: cout << "+----------+----------+----------+----------+\n";
    
    
}