/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:43 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/09 12:44:39 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
class Contact {
    private :
        std :: string firstName;
        std :: string lastName;
        std :: string nickname;
        std :: string phoneNumber;
        std :: string darkestSecret;
        int id;
    public :
        void fillData(int i);
        int  checkNumber(std :: string n);
        void fillFirstName();
        void fillLasttName();
        void fillNicktName();
        void fillDarkestsecret();
        int  print();
        int  checkSpaces(std :: string s);
        void printBlock(std :: string s);
        int  isEmpty();
        int  getId();
        void printInfo();
        void clearContent();
        void getLineProtected(std :: string input , std :: string out);
};

#endif