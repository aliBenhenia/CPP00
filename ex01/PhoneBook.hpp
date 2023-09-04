/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:06:52 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/03 18:33:49 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
class PhoneBook
{
    private :
        Contact contacts[8];
    public :
        PhoneBook(){
            int i =0;
             
            
        }
        void printIntro();
        void addIinfo();
        void search();
};



