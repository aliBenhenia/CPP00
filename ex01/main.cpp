/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:59 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/04 11:40:35 by abenheni         ###   ########.fr       */
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
        if (input.compare("EXIT") == 0)
            exit(1);
        else if (input.compare("ADD") == 0)
            data.addIinfo();
        else if (input.compare("SEARCH") == 0)
            data.search();
    }
}
