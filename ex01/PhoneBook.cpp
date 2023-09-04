/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:45 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/04 12:39:24 by abenheni         ###   ########.fr       */
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
        contacts[i].fillData(i + 1);
        i++;
     }
     else
     {
        contacts[7].clearContent();
        contacts[7].fillData(8);
     }
 }
 
 void PhoneBook :: search()
{
    int i = 0;
    int id = -1;
    int flag = -1;
    std :: string dd;

    if (contacts[i].isEmpty() == 0)
    {
        std :: cout << "phone book empty !\n";    
        return;
    }
    std :: cout << "+----------+----------+----------+----------+\n";
    std :: cout << "| id       |first name|last name |nick name |\n";
    std :: cout << "+----------+----------+----------+----------+\n";
    while (i < 8)
    {
        if (contacts[i].print() == 0)
            break;
        i++;
    }
    std :: cout << "enter id : ";
    std :: cin >> id;
    std :: cin.ignore();
    i = 0;
    while (i < 8)
    {
        if (contacts[i].isEmpty() == 0)
            break;
        if (contacts[i].getId() == id)
        {
            contacts[i].printInfo();
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == -1)
        std :: cout << "invalid id\n";
}