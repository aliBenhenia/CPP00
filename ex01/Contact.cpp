/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:43:44 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/04 12:04:30 by abenheni         ###   ########.fr       */
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

int Contact :: onlySpaces(std :: string s)
{
    int i = 0;
    while (s[i] && (s[i] == 32 || s[i] == '\t'))
        i++;
    if (s[i] == '\0')
        return 1;
    
    return 0;
}

void  Contact :: fillFirstName()
{
    while (1)
    {
        std :: cout << "enter first name : ";
        getline(std :: cin , firstName);
        if (firstName[0] == '\0' || onlySpaces(firstName))
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
        if (lastName[0] == '\0' || onlySpaces(lastName))
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
        if (nickname[0] == '\0' || onlySpaces(nickname))
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
        if (darkestSecret[0] == '\0' || onlySpaces(darkestSecret))
            std :: cout << "emppty field ...try again\n";
        else
            break;
    }
}

void Contact :: printBlock(std :: string s)
{
    int i = 0;
    while (i < 10)
    {
        if (s[i] && i == 9)
            std :: cout << ".";
        else if (s[i]&& s[i]  != '\t')// 
            std :: cout << s[i];
        else
            std :: cout << " ";
        i++;
    }
    std :: cout << "|";
}

int  Contact :: print()
{
    if (firstName.empty())
        return (0);
    std :: cout << "|";
    std :: cout << id << "         |";
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
    std :: cout << firstName << "\n";
    std :: cout << lastName << "\n";
    std :: cout << nickname << "\n";
    std :: cout << phoneNumber << "\n";
    std :: cout << darkestSecret << "\n";
}

void Contact :: clearContent()
{
     firstName.clear();
     lastName.clear();
     nickname.clear();
     phoneNumber.clear();
     darkestSecret.clear();
}

