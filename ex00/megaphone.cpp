/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:48:22 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/09 12:53:37 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (ac == 1 || (av[1][0] == '\0' && av[2] == NULL))
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    av[i][j] = av[i][j] - 32;
                std :: cout << av[i][j];
                j++;
            }
            i++;
        }
    }
    std :: cout << "\n";
    return (0);
}