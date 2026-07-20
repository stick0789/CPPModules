#include "Bureaucrat.hpp"

int main()
{
    

    std::cout << "~~~ Test 1: Bureaucrat Creation And Printing ~~~" << std::endl;
    try
    {
        Bureaucrat chief("Profesor", 1);
        Bureaucrat bureaucrat("Hermes Conrad", 42);
        Bureaucrat assistant("Fry", 150);

        std::cout << chief << std::endl;
        std::cout << bureaucrat << std::endl;
        std::cout << assistant << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 2: Bureaucrat Creation And Fail (Too High) ~~~" << std::endl;
    try
    {
        Bureaucrat chief("Profesor", -1);

        std::cout << chief << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 3: Bureaucrat Creation And Fail (Too Low) ~~~" << std::endl;
    try
    {
        Bureaucrat assistant("Fry", 151);

        std::cout << assistant << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 4: Grade Too High ~~~" << std::endl;
    try
    {
        
        Bureaucrat chief("Profesor", 1);

        std::cout << chief << std::endl;

        //  ----    Promoting Chief ----
        std::cout << "Promoting Chief (Impossible)" << std::endl;
        chief.incrementGrade();
        std::cout << chief << std::endl;
        //std::cout << "This line should not print!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 5: Grade Too Low ~~~" << std::endl;
    try
    {
        Bureaucrat assistant("Fry", 150);

        std::cout << assistant << std::endl;

        //  ----    Degrading Assistant ----
        std::cout << "Degrading Assistant (Impossible)" << std::endl;
        assistant.decrementGrade();
        std::cout << assistant << std::endl;
        //std::cout << "This line should not print!" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 6: Increment Grade ~~~" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Hermes Conrad", 42);
        Bureaucrat assistant("Fry", 150);

        std::cout << bureaucrat << std::endl;
        std::cout << assistant << std::endl;

        //  ----    Promoting Bureaucrats ----
        std::cout << "Promoting Bureaucrat" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        std::cout << "Promoting Assistant" << std::endl;
        assistant.incrementGrade();
        std::cout << assistant << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 8: Testing Cannonical ~~~" << std::endl;
    try
    {
        Bureaucrat original("original", 43);
        Bureaucrat clone(original); //Copy Constructor
        Bureaucrat assigned;    //Assigned Constructor (by default)

        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy: " << clone << std::endl;
        std::cout << "By Default: " << assigned << std::endl;

        //  ----    Promoting Original ----
        std::cout << "Promoting Bureaucrat" << std::endl;
        original.decrementGrade();
        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy: " << clone << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    return (0);
}