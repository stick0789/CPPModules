#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
:AForm("ShrubberyCreationForm", false, 145, 137),
_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
:AForm(obj),
_target(obj._target)
{}
/*_name(obj._name),
_isSigned(obj._isSigned),
_gradeToSign(obj._gradeToSign),
_gradeToExecute(obj._gradeToExecute)*/


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        _target = obj._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}