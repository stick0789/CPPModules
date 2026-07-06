#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class AForm
{
    public:
        //Cannonical
        AForm();
        AForm(const std::string &name, bool isSigned, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        virtual ~AForm();

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

        class NotSignedException : public std::exception
        {
            public:
                //What? ->
                //Virtual method in charge to return a error message(string)
                //throw?
                //is a exception specification, it will never send an execption inside itself
                const char *what() const throw();

        };

        /*class NotSignedException : public std::exception
        {
            public:
                //What? ->
                //Virtual method in charge to return a error message(string)
                //throw?
                //is a exception specification, it will never send an execption inside itself
                const char *what() const throw();

        };*/

        //Member Function
        void beSigned(const Bureaucrat &bureaucrat);

        //Abstract
        virtual void execute(Bureaucrat const &executor) const = 0;

    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSign;
        const int          _gradeToExecute;
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif