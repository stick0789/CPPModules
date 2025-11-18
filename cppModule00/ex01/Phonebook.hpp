/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:41:33 by jaacosta          #+#    #+#             */
/*   Updated: 2025/09/10 19:41:34 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8

class Phonebook
{
private:
	Contact contacts[MAX_CONTACTS];
	int		currentIndex;
	int		contactCount;

	std::string	formatColumn(const std::string& text) const;

public:
	Phonebook();

	void	addContact();
	void	searchContacts();
	~Phonebook();
};

#endif
