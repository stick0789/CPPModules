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
    //check the special 
    if (param == "nanf" || param == "inff" || param == "+inff" || param == "-inff")
        return true;
    //check the length
    if (param.length() < 2 )
        return false;
    char lastFlChart = param[param.length() - 1];
    if (lastFlChart != 'f' && lastFlChart != 'F')
        return false;
    size_t i = 0;
    if (param[i] == '-' || param[i] == '+')
        i++;
    bool hasDot = false;
    size_t  digits = 0;
    for(; i < param.length() -1; i++)
    {
        if (param[i] == '.')
        {
            if (hasDot)
                return false;
            hasDot = true;
        }
        else if (std::isdigit(param[i]))
            digits++;
        else
            return false;
    }
    return (digits > 0 && hasDot);
}

bool isDouble(const std::string &param)
{
    // check the special
    if (param == "nan" || param == "inf" || param == "+inf" || param == "-inf")
        return true;
    size_t i = 0;
    if (param[i] == '+' || param[i] == '-')
        i++;
    bool hasDot = false;
    size_t digits = 0;
    for(; i < param.length() -1; i++)
    {
        if (param[i] == '.')
        {
            if (hasDot)
                return false;
            hasDot = true;
        }
        else if (std::isdigit(param[i]))
            digits++;
        else
            return false;
    }
    return (digits > 0 && hasDot);
}

void toChar(const std::string &param, input type)
{
    std::cout << "Char: ";
    if (type == CHAR)
        std::cout << param << std::endl;
    else
    {
        float val = std::strtof(param.c_str(), NULL);
        // Checks the excepcional cases
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

void toFloat(const std::string &param, input type)
{
    std::cout << "float: ";
    if (type == CHAR)
    {
        char c = (param.length() == 3 && param[0] == '\'') ? param[1] : param[0];
        float f = static_cast<float>(c);
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        return;
    }
    if (param == "nan" || param == "nanf")
    {
        std::cout << "nanf" << std::endl;
        return;
    }
    if (param == "inf" || param == "inff" || param == "+inf" || param == "+inff")
    {
        std::cout << "+inff" << std::endl;
        return;
    }
    if (param == "-inf" || param == "-inff")
    {
        std::cout << "-inff" << std::endl;
        return;
    }
    float f = std::strtof(param.c_str(), NULL);
    std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void toDouble(const std::string &param, input type)
{
    std::cout << "double: ";
    if (type == CHAR)
    {
        char c = (param.length() == 3 && param[0] == '\'') ? param[1] : param[0];
        double d = static_cast<double>(c);
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
        return;
    }
    if (param == "nan" || param == "nanf")
    {
        std::cout << "nan" << std::endl;
        return;
    }
    if (param == "inf" || param == "inff" || param == "+inf" || param == "+inff")
    {
        std::cout << "+inf" << std::endl;
        return;
    }
    if (param == "-inf" || param == "-inff")
    {
        std::cout << "-inf" << std::endl;
        return;
    }
    double d = std::strtod(param.c_str(), NULL);
    std::cout << std::fixed << std::setprecision(1) << d << std::endl;
}


input defType(const std::string &param)
{
    if (isChar(param))
        return CHAR;
    if (isInt(param))
        return INT;
    if (isFloat(param))
        return FLOAT;
    if (isDouble(param))
        return DOUBLE;
    throw Input();
}

void ScalarConverter::convert(const std::string &param)
{
    try
    {
        input type = defType(param);

        toChar(param, type);
        toInt(param, type);
        toFloat(param, type);
        toDouble(param, type);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

ScalarConverter::~ScalarConverter()
{   }