#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
AForm("ShrubberyCreationForm", false, 145, 137), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
:AForm("ShrubberyCreationForm", false, 145, 137),
_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
:AForm(obj),
_target(obj._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        _target = obj._target;
    }
    return (*this);
}

const char *ShrubberyCreationForm::FileNotOpenException::what(void) const throw()
{
    return("You don't have write permissions");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor); 
    std::string name = _target + "_shrubbery";
    std::ofstream file(name.c_str());
    if (!file.is_open())
        throw FileNotOpenException();
    file << "       _-_" << std::endl;
    file << "    /~~   ~~\\" << std::endl;
    file << " /~~         ~~\\" << std::endl;
    file << "{               }" << std::endl;
    file << " \\  _-     -_  /" << std::endl;
    file << "   ~  \\\\ //  ~" << std::endl;
    file << "_- -   | | _- _" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "      // \\\\" << std::endl;
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}