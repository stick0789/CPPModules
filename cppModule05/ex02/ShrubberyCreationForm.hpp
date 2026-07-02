#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm : public AForm 
{
    public:
        //Cannonical
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();

        class FileNotOpenException : public std::exception
        {
            public:
                //What? ->
                //Virtual method in charge to return a error message(string)
                //throw?
                //is a exception specification, it will never send an execption inside itself
                const char *what() const throw();

        };

        //The virtual function that is neccesary to implument due to the AForm Class
        virtual void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif