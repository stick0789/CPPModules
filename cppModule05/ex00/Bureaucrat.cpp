#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NoNameB"), _grade(MIN_GRADE)
{   };

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
    if (_grade > MIN_GRADE)
        throw GradeTooLowException();
    if (_grade < MAX_GRADE)
        throw GradeTooHighException();
};

//copy constructor

Bureaucrat::Bureaucrat(const Bureaucrat &obj): 
_name(obj._name), 
_grade(obj._grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
        _grade = obj._grade; //also can use getGrade() to "never read an attribute directly"; defensive encapsutaltion
    return *this;
}

std::string const Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

Bureaucrat::~Bureaucrat()
{   }