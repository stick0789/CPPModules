/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:36:25 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:36:27 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat()/**/
{
    /* using this, change the type of animal.*/
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat inherited copy constructor" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Woof! Woof! Ups, I Mean Meoww Meoww" << std::endl;
}
