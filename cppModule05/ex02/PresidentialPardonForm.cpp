#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
AForm("PresidentialPardonForm", false, 25, 5), _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
:AForm("PresidentialPardonForm", false, 25, 5),
_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
:AForm(obj),
_target(obj._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        _target = obj._target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}