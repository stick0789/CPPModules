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

bool isIntt(const std::string &param)
{

}

bool isFloat(const std::string &param)
{

}

bool isDouble(const std::string &param)
{

}

                /*
            if (std::round(std::stof(param)) > 31 && std::round(std::stof(param)) < 127)
				std::cout << "'" << static_cast<char>(std::round(std::stof(param))) << "'" << std::endl;
			else if (std::round(std::stof(param)) >= CHAR_MIN && std::round(std::stof(param)) <= UCHAR_MAX)
				std::cout << "Non displayable" << std::endl;
			else
				throw Input(); */
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

toInt
toFloat
toDouble

void ScalarConverter::convert(const std::string &param)
{
    
}

ScalarConverter::~ScalarConverter()
{   }