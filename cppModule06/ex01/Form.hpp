#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form
{
    public:
        //Cannonical
        Form();
        Form(const std::string &name, bool isSigned, const int gradeToSign, const int gradeToExecute);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();

        //Getters
        const std::string   getName()const;
        bool                getIsSigned() const;
        int           getGradeToSign() const;
        int           getGradeToExecute() const;

        //Catch Exception
        //here the "GradeTooHighException" class innherit the standar class exception(father)
        class GradeTooHighException : public std::exception
        {
            public:
                //What? ->
                //Virtual method in charge to return a error message(string)
                //throw?
                //is a exception specification, it will never send an execption inside itself
                const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                //What? ->
                //Virtual method in charge to return a error message(string)
                //throw?
                //is a exception specification, it will never send an execption inside itself
                const char *what() const throw();

        };  

        //Member Function
        void beSigned(const Bureaucrat &bureaucrat);

    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int          _gradeToExecute;
};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif