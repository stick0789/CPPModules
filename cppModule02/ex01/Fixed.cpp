/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:19:58 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/21 17:20:02 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed() : _fixPointValue(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Default Copy Constructor Called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Default Assigment Operator Called" << std::endl;
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

/*Calling the toFloat member function*/
float Fixed::toFloat() const
{
    /* Divide for 2^8 to convert into a float without losing decimals*/
    return (float)this->_fixPointValue / (1 << _numFractBits);
}

/*Calling the toInt member function*/
int Fixed::toInt() const
{
    /* Move to the right to delete the 8 bits */
    return (int)this->_fixPointValue >> _numFractBits;
}


std::ostream &operator<<(std::ostream &o, Fixed const &i) {
    o << i.toFloat(); // Insert the float representation into the stream
    return o;
}

Fixed::Fixed(const int _real)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixPointValue = _real << _numFractBits;
}

Fixed::Fixed(const float _decimal)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixPointValue = roundf(_decimal * (1 << _numFractBits));
}




Fixed::~Fixed()
{
    std::cout << "Default Destructor Called" << std::endl;
}
