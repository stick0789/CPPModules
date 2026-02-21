#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int _fixPointValue;
        static const int _numFractBits = 8;
    public:
        Fixed();/* Default Constructor*/
        ~Fixed();/* Default Destructor*/
        Fixed(const Fixed &other);/* Default Copy Constructor*/
        Fixed &operator=(const Fixed &other); /* Default Assigment Operator Constructor*/
        
        Fixed(const int);/* Constructor that takes a constant integer as a parameter.*/
        Fixed(const float);/* Constructor that takes a constant floating-point number as a parameter.*/

        float toFloat( void ) const;/* Function that converts the fixed-point value to a floating-point value.*/
        int toInt( void ) const;/* Function that converts the fixed-point value to an integer value.*/

        int getRawBits( void ) const;/* Function that returns the raw value of the fixed-point value.*/
        void setRawBits( int const raw );/* Function that sets the raw value of the fixed-point number.*/
        
};