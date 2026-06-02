/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:36:16 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:36:18 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")/*Constructor initialized*/
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()/*Destructor */
{
    std::cout << "Default AAnimal Destructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "Default AAnimal Copy Constructor Called" << std::endl;
    *this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}


/**
 * due to now Animal is an abstract class we dont use anymore this function
 *  void Animal::makeSound() const
    {
        std::cout << "The Animal Make An Indistinguishable Sound... " << std::endl;
    }
 */


std::string AAnimal::getType() const
{
    return _type;
}