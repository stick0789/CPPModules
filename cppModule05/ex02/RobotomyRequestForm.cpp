#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
AForm("RobotomyRequestForm", false, 72, 45), _target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
:AForm("RobotomyRequestForm", false, 72, 45),
_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
:AForm(obj),
_target(obj._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
    {
        AForm::operator=(obj);
        _target = obj._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    std::cout << " Makes some drilling noises: BZZZZZZZZZT! " << std::endl;
    if (std::rand() % 2 == 0) // 50% succes Rate
        std::cout << _target << " has been robotomized successfully " << std::endl;
    else
        std::cout << "The robotomy on " << _target << " has failed. Oops!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}