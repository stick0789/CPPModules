#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern : public AForm
{
    public:
        //cannonical
        Intern();
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern();

        //Method Function
        AForm &makeForm(std::string formName, std::string target);
    private:
    
};

#endif