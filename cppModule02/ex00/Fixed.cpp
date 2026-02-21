/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:43:50 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/20 19:43:52 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

/*calling the empty constructor*/
Fixed::Fixed() : _fixPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

/*Calling the copy constructor */
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    /* Instead repeat code, we call the assigment operator*/
    *this = other;
}

/*Calling the assignment operator=*/
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    /* Verify we arn't assigment to ourself (a == a)*/
    if (this != &other)
    {
        /* copy the bits from the other object*/
        this->_fixPointValue = other.getRawBits();
    }
    /* Return the actual object to allow a = b = c*/
    return *this;
}


/*Calling the get member function */
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixPointValue;
}

/*Calling the set member function*/
void Fixed::setRawBits(int const raw)
{
    this->_fixPointValue = raw;
}

/*calling the destructor */
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
