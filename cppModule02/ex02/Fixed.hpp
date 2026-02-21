#include <iostream>
#include <string>

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

        int getRawBits( void ) const;/* Function that returns the raw value of the fixed-point value.*/
        void setRawBits( int const raw );/* Function that sets the raw value of the fixed-point number.*/
        
};