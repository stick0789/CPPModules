#include "AForm.hpp"

AForm::AForm():_name("formName"), _isSigned(false), _gradeToSign(MAX_GRADE), _gradeToExecute(MAX_GRADE)
{
}

AForm::AForm(const std::string &name, bool isSigned, const int gradeToSign, const int gradeToExecute)
:_name(name),
_isSigned(isSigned),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute)
{
    if (gradeToSign < MAX_GRADE || gradeToExecute < MAX_GRADE)
        throw GradeTooLowException();
    if (gradeToSign > MIN_GRADE || gradeToExecute > MIN_GRADE)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &obj):
_name(obj._name),
_isSigned(obj._isSigned),
_gradeToSign(obj._gradeToSign),
_gradeToExecute(obj._gradeToExecute)
{
}

AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
        _isSigned = obj._isSigned;
    return (*this);

}

const std::string AForm::getName() const
{
    return(_name);
}

bool AForm::getIsSigned() const
{
    return(_isSigned);
}

int AForm::getGradeToSign() const
{
    return(_gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return(_gradeToExecute);
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
    return("Grade too HIGH");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
    return("Grade too LOW");
}

const char *AForm::NotSignedException::what(void) const throw()
{
    return("The Form is NOT SIGNED.");
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (_isSigned)
        return ; //to check if the form is signed or not
    if (b.getGrade() > _gradeToSign)
        throw GradeTooLowException();   
    _isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned())
        throw NotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
    os  << "Form " << f.getName()
        << ", Signed " << (f.getIsSigned() ? "Yes" : "No")
        << ", Grade Required To Sign " << f.getGradeToSign()
        << ", Grade Requires To Execute " << f.getGradeToExecute();
    return os;
}

AForm::~AForm()
{}


