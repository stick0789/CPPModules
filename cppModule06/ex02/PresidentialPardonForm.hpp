#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm 
{
    public:
        //Cannonical
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        virtual ~PresidentialPardonForm();

        //The virtual function that is neccesary to implument due to the AForm Class
        virtual void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif