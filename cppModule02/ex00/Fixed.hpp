/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:43:20 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/20 19:43:22 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>


/**
 * in C++ the cannonical orthodox form means that every class has:
 * * The constructor by default to initialize objects without initial values
 * * The copy constructor to create a new object as a copy of an existent one
 * * The assignment operator= to copie the values of an object to another that already exist
 * *the classic destructor.
 */
class Fixed
{
	private:
		int					_fixPointValue;
		static const int	_numFractBits = 8;
	public:
		Fixed();/* Constructor by default*/
		Fixed(const Fixed &other);/* Copy constructor*/
		Fixed &operator=(const Fixed &other);/* assignment operator*/
		~Fixed();/* Destructor*/
		int getRawBits( void ) const;/* Returns the raw value of the fixed-point value. ending with a const mean is only a only read function*/
		void setRawBits( int const raw );/* Sets the raw value of the fixed-point number*/

};