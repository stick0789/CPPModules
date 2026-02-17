/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:57:08 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/13 17:57:11 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int		main()
{
	Phonebook myPhonebook;

	std::string command;

	std::cout << "  --- Welcome to the vintage Phonebook ---" << std::endl;

	while (1)
	{
		std::cout << std::endl << "Input a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << std::endl <<"BYE BYE" << std::endl;
			break;
    	}

		if (command == "ADD")
		{
			myPhonebook.addContact();
		}
		else if (command == "SEARCH")
		{
			myPhonebook.searchContacts();
		}
		else if (command == "EXIT")
		{
			std::cout << "Leaving the Phonebook contacst. BYE FOREVER."  << std::endl;
			break;
		}
		else
		{
			std::cout << " command not valid, try again."  << std::endl;
		}
	}

	return 0;
}
