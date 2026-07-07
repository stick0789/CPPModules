#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &obj)
{
    *this = obj;
}

Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

/*const char *Intern::NotRealForm::what(void) const throw()
{
    return("Dumb Inter, That Form Does'nt Exist IDIOT");
}*/

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
    //  ----    String Array for the types of forms ----
    std::string formTypes[3] = 
    {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    int formIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        if (formTypes[i] == formName)
        {
            formIndex = i;
            break; 
        }

    }

    switch (formIndex)
    {
        case 0:
            std::cout << "Intern creates " << formName <<" form" << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << formName <<" form" << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << formName <<" form" << std::endl;
            return new PresidentialPardonForm(target);
        
        default:
            std::cout << "Dumb Inter, That Form Does'nt Exist IDIOT "<< std::endl;
            return NULL;
    }
    
}

Intern::~Intern()
{}