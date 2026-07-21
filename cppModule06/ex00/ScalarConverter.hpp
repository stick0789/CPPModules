#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
#include <iomanip>
# include <cfloat>
# include <climits>
# include <cstdlib>
# include <stdexcept>
# include <cmath>

enum input
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class ScalarConverter
{
    public:
        //required method
        static void convert(const std::string &param);

    private:
        //cannonical
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();
};

class Input: public std::exception
{
	public:
		const char	*what() const throw();
};


#endif