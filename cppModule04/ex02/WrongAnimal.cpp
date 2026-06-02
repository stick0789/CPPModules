/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:30:31 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 16:30:33 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")/*Constructor initialized*/
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()/*Destructor */
{
    std::cout << "Default WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Default WrongAnimal Copy Constructor Called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}


void WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal is Speakeing... " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

