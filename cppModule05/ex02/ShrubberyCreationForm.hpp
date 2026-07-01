#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"


class ShrubberyCreationForm : public AForm 
{
    public:
        //Cannonical
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();

        //The virtual function that is neccesary to implument due to the AForm Class
        virtual void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif