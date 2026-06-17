#include "Form.hpp"

Form::Form():_name("formName"), _isSigned(false), _gradeToSign(MAX_GRADE), _gradeToExecute(MAX_GRADE)
{
}

Form::Form(const std::string &name, bool isSigned, const int gradeToSign, const int gradeToExecute)
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

Form::Form(const Form &obj):
_name(obj._name),
_isSigned(obj._isSigned),
_gradeToSign(obj._gradeToSign),
_gradeToExecute(obj._gradeToExecute)
{
}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
        _isSigned = obj._isSigned;
    return (*this);

}

const std::string Form::getName() const
{
    return(_name);
}

bool Form::getIsSigned() const
{
    return(_isSigned);
}

int Form::getGradeToSign() const
{
    return(_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return(_gradeToExecute);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return("Grade too HIGH");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return("Grade too LOW");
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _gradeToSign)
        throw GradeTooLowException();   
    _isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
    os  << "Form " << f.getName()
        << ", Signed " << (f.getIsSigned() ? "Yes" : "No")
        << ", Grade Required To Sign " << f.getGradeToSign()
        << ", Grade Requires To Execute " << f.getGradeToExecute();
    return os;
}

Form::~Form()
{}


