#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class  RobotomyRequestForm : public AForm
{
    public:
        //Cannonical
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        virtual ~RobotomyRequestForm();

        //The virtual function that is neccesary to implument due to the AForm Class
        virtual void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif