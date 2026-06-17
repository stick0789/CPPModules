#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NoNameB"), _grade(MIN_GRADE)
{   }

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
    if (_grade > MIN_GRADE)
        throw GradeTooLowException();
    if (_grade < MAX_GRADE)
        throw GradeTooHighException();
}

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

const std::string  Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

void Bureaucrat::incrementGrade(int num)
{
    if (num < 0)
        return ;
    
    int nextGrade =_grade - num;
    if (nextGrade <= MAX_GRADE)
        throw GradeTooHighException();
    _grade = nextGrade;
}

void Bureaucrat::decrementGrade(int num)
{
    if (num < 0)
        return ;
    
    int nextGrade =_grade + num;
    if (nextGrade >= MIN_GRADE)
        throw GradeTooLowException();
    _grade = nextGrade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Grade too HIGH");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Grade too LOW");
}

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << _name << " Signed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " Couldn't Sign " << f.getName() << " Because " << e.what() << std::endl;
    }
    
    
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}


Bureaucrat::~Bureaucrat()
{   }