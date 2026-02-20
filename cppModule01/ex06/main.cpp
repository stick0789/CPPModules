/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:07:28 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/17 21:07:29 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc != 2)
    {
        std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}

