/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:06:57 by jaacosta          #+#    #+#             */
/*   Updated: 2025/09/10 20:06:58 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cctype>
#include <cstdlib> /* used for exit (0)*/

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkSecret;
    //int         id;

public:
    /**
     * Constructor
     */
    Contact();

    /**
     * Methods for the UI
     */
    void    inputInfo();
    void    displayInfo() const;

    /**
     * Aux Methods for the table visualization
     */
    std::string getField(int index) const;
    bool isEmpty() const;
};

#endif