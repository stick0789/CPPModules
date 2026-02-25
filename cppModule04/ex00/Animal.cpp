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
#include "Animal.hpp"

Animal::Animal() : _type("Animal")/*Constructor initialized*/
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()/*Destructor */
{
    std::cout << "Default Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Default Animal Copy Constructor Called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}


void Animal::makeSound() const
{
    std::cout << "The Animal Make An Indistinguishable Sound... " << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}