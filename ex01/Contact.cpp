/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:43:44 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/11 14:39:54 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact :: fillData(int i)
{
    fillFirstName();
    fillLasttName();
    fillNicktName();
    while (1)
    {
        std :: cout << "enter phone number : ";
        getline(std :: cin , phoneNumber);
        if (std :: cin.eof())
            exit(1);
        if (checkNumber(phoneNumber) && phoneNumber[0] != '\0')
            break;
        else
            std :: cout << "invalid number\n";
    }
   fillDarkestsecret();
   id = i;
}

int Contact :: checkNumber(std :: string n)
{
    int i = 0;
    while (n[i] && (n[i] >= '0' && n[i] <= '9'))
        i++;
    if (n[i] == '\0')
        return 1;
    return 0;
}

int Contact :: checkSpaces(std :: string s)
{
    int i = 0;
    while (s[i])
    {
        if (s.at(i) == 32 || s.at(i) == '\t')
            return 1;
        i++;
    }
    return 0;
}

void  Contact :: fillFirstName()
{
    while (1)
    {
        std :: cout << "enter first name : ";
        getline(std ::cin, firstName);
        if (std :: cin.eof())
            exit(1);
        if (firstName[0] == '\0' || checkSpaces(firstName))
            std :: cout << "emppty field ...try again\n";
        else
            break;
    }
}

void  Contact :: fillLasttName()
{
    while (1)
    {
        std :: cout << "enter last name : ";
        getline(std :: cin , lastName);
        if (std :: cin.eof())
            exit(1);
        if (lastName[0] == '\0' || checkSpaces(lastName)) 
            std :: cout << "emppty field ...try again\n";
        else
            break;
    }
}

void  Contact :: fillNicktName()
{
    while (1)
    {
        std :: cout << "enter nick name: ";
        getline(std :: cin , nickname);
        if (std :: cin.eof())
            exit(1);
        if (nickname[0] == '\0' || checkSpaces(nickname))
            std :: cout << "emppty field ...try again\n";
        else
            break;
    }
}

void  Contact :: fillDarkestsecret()
{
    while (1)
    {
        std :: cout << "enter darkset secret : ";
        getline(std :: cin , darkestSecret);
        if (std :: cin.eof())
            exit(1);
        if (darkestSecret[0] == '\0' || checkSpaces(darkestSecret))
            std :: cout << "emppty field ...try again\n";
        else
            break;
    }
}

void Contact :: printBlock(std :: string s)
{
    if (s.length() > 10)
        std :: cout << s.substr(0,9) << ".";
    else if (s.length() == 10)
         std :: cout << s.substr(0,10);
    else if (s.length() < 10)
         std :: cout << std :: setw(10)  << s;
    std :: cout << "|";
}

int  Contact :: print()
{
    if (firstName.empty())
        return (0);
    std :: cout << "|" << std :: setw(10) << id << "|";
    printBlock(firstName);
    printBlock(lastName);
    printBlock(nickname);
    std :: cout << "\n";
    std :: cout << "+----------+----------+----------+----------+\n";
    return (1);
}

int Contact :: isEmpty()
{
    if (firstName.empty())
        return 0;
    return (1);
}

int Contact :: getId()
{
    return (id);
}

void Contact :: printInfo()
{
    std :: cout << "first name : " <<firstName << "\n";
    std :: cout << "last name : " <<lastName << "\n";
    std :: cout << "nick name : " <<nickname << "\n";
    std :: cout << "phone number : " <<phoneNumber << "\n";
    std :: cout << "darkset secret : " <<darkestSecret << "\n";
}

void Contact :: clearContent()
{
     firstName.clear();
     lastName.clear();
     nickname.clear();
     phoneNumber.clear();
     darkestSecret.clear();
}

