#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150

class   Bureaucrat
{
    public:
        //Cannonnical
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        //Getters
        std::string const   getName()const;
        int                 getGrade()const;

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

    private:
        const std::string _name;
        int _grade;
};

std::ostream &operator<<(std::ostream os, const Bureaucrat &b);

#endif