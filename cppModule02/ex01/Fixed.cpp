#include "Fixed.hpp"

Fixed::Fixed() : _fixPointValue(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Default Copy Constructor Called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Default Assigment Operator Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default Destructor Called" << std::endl;
}