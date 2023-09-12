/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:59 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/12 11:08:38 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook data;
    std :: string input;
    data.printIntro();
    while (1)
    {
        std :: cout << "-> ";
        getline(std:: cin, input);
        if (std :: cin.eof())
            break;
        if (input.compare("EXIT") == 0)
             break;
        else if (input.compare("ADD") == 0)
            data.addIinfo();
        else if (input.compare("SEARCH") == 0)
            data.search();
    }
    return (0);
}
