/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:41:24 by jaacosta          #+#    #+#             */
/*   Updated: 2025/09/10 19:41:27 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

Phonebook::Phonebook() : currentIndex(0), contactCount(0)
{

}

/**
 * Auxiliar Function to aply the required format
 */
std::string Phonebook::formatColumn(const std::string& text) const
{
	if (text.length() > 10)
	{
		return text.substr(0, 9) + ".";
	}
	else
	{
		std::string s = text;
		while (s.length() < 10)
		{
			s = " " + s;
		}
		return s;
	}
}

/**
 * Function to add the contact with the rules of replacement
 * if the count is bigger than MAX_CONTACTS
 */
void Phonebook::addContact()
{
	if (currentIndex >= MAX_CONTACTS)
	{
		currentIndex = 0;
	}

	contacts[currentIndex].inputInfo();

	currentIndex++;
	if (contactCount < MAX_CONTACTS)
	{
		contactCount++;
	}
}

/**
 * Function to show the search table and 
 * ask for an index
 */
void Phonebook::searchContacts()
{
	if (contactCount == 0)
	{
		std::cout << "The contact Phonebook is empty."  << std::endl;
		return ;
	}

	std::cout 	<< "|"
				<< formatColumn("Index") << "|"
				<< formatColumn("First Name") << "|"
				<< formatColumn("Last Name") << "|"
				<< formatColumn("Nickname") << "|" << std::endl;

	//to print the contacts
	for (int i = 0; i < contactCount; i++)
	{
		if (!contacts[i].isEmpty())
		{
			std::cout << "|";
			std::string indexStr;
			indexStr = " ";
			//?
			if (i + 1 < 10) indexStr = "";
			//?
			std::cout << std::setw(10) << std::right << i + 1 << "|";
			std::cout << formatColumn(contacts[i].getField(1)) << "|";
			std::cout << formatColumn(contacts[i].getField(2)) << "|";
			std::cout << formatColumn(contacts[i].getField(3)) << "|" << std::endl;
		}
	}

	//ask the inndex of the contact
	std::string input;
	std::cout << "input the index to search the contact or 0 to cancel: ";
	std::getline(std::cin, input);

	int indexNumber = std::atoi(input.c_str());

	if (indexNumber >= 1 && indexNumber <= contactCount)
	{
		contacts[indexNumber - 1].displayInfo();
	}
	else if (indexNumber != 0)
	{
		std::cout << "Error: wrong index or index out of the range. " << std::endl;
	}
}

Phonebook::~Phonebook()
{
	/**
	 * Empty cause there's no dinamic memory to free.
	 */
}
