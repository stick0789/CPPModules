#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
    public:
        //cannonical
        Intern();
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern();

        //Method Function
        AForm *makeForm(std::string const &formName, std::string const &target);

        //Exception Wrong Form
        /*class NotRealForm : public std::exception
        {
            public:
                //What? ->
                //Virtual method in charge to return a error message(string)
                //throw?
                //is a exception specification, it will never send an execption inside itself
                const char *what() const throw();
        };*/
};

#endif