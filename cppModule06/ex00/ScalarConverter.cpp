#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}
ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    *this = obj;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
    return *this;
}


const char	*Input::what() const throw()
{
	return ("Invalid input");
}

bool isChar(const std::string &param)
{
    if (param.length() == 3 && param.at(0) == '\'' && param.at(2) == '\'' && std::isprint(param[1]))
        return true;
    if (param.length() == 1 && std::isprint(param[0])  && !std::isdigit(param[0]))
		return true;
	return (false);
}

bool isInt(const std::string &param)
{
    size_t i = 0;

    if (param[i] == '+' || param[i] == '-')
        i++;
    if (i == param.length())
        return false;
    for (; i < param.length(); i++)
    {
        if (!std::isdigit(param[i]))
            return false;
    }
    return true;
}

bool isFloat(const std::string &param)
{

}

bool isDouble(const std::string &param)
{

}

void tochar(const std::string &param, input type)
{
    std::cout << "Char: ";
    if (type == CHAR)
        std::cout << param << std::endl;
    else
    {
        float val = std::strtof(param.c_str(), NULL);
        if (param == "nan" || param == "nanf" || param == "inf" || 
            param == "+inf" || param == "-inf" || param == "inff" || 
            param == "+inff" || param == "-inff")
        {
            std::cout << "impossible" << std::endl;
            return;
        }
        if (val >= 0 && val <= 127)
        {
            char c = static_cast<char>(val);
            if (std::isprint(c))
                std::cout << "'" << c << "'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }
    }
}

void toInt(const std::string &param, input type)
{
    std::cout << "int: ";

    if (type == CHAR)
    {
        char c = (param.length() == 3 && param[0] == '\'') ? param[1] : param[0];
        std::cout << static_cast<int>(c) << std::endl;
        return;
    }

    // Checks the excepcional cases
    if (param == "nan" || param == "nanf" || param == "inf" || 
        param == "+inf" || param == "-inf" || param == "inff" || 
        param == "+inff" || param == "-inff")
    {
        std::cout << "impossible" << std::endl;
        return;
    }

    double val = std::strtod(param.c_str(), NULL);
    // Verify the overflow
    if (val <= INT_MAX && val >= INT_MIN)
    {
        std::cout << static_cast<int>(val) << std::endl;
    }
    else
    {
        std::cout << "impossible" << std::endl;
    }
}

//toFloat
//toDouble

void ScalarConverter::convert(const std::string &param)
{
    
}

ScalarConverter::~ScalarConverter()
{   }