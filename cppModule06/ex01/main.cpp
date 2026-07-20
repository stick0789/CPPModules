#include "Bureaucrat.hpp"
#include "Form.hpp"

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
        Bureaucrat byDefault;    // print the Default values
        Bureaucrat assigned = original; //Assigned Constructor

        std::cout << "Original: " << original << std::endl;
        std::cout << "Copy: " << clone << std::endl;
        std::cout << "By Default: " << byDefault << std::endl;
        std::cout << "Assigned Constructor: " << assigned << std::endl;

        //  ----    Promoting Original  ----
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

    std::cout << "~~~ Test 9: Form Creation And Printing ~~~" << std::endl;
    try
    {
        //  ----    Form Creation Testing   ----
        Form defaultForm;
        Form taxForm("Tax Reduction 28B", false, 45, 20);

        std::cout << defaultForm << std::endl;
        std::cout << taxForm << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 10: Form Creation And Fail (Too High) ~~~" << std::endl;
    try
    {
        //  ----    Ilegal Grade 0 (MAX_GRADE es 1) ----~
        Form illegalForm("Top Secret Plan", false, 0, 50);
        std::cout << illegalForm << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 11: Form Creation And Fail (Too Low) ~~~" << std::endl;
    try
    {
        //  ----    Ilegal Grade 151 (MIN_GRADE 150)    ----
        Form illegalForm("Coffee Request", false, 50, 151);
        std::cout << illegalForm << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 12: Successful Form Signing ~~~" << std::endl;
    try
    {
        Bureaucrat chief("Profesor", 10);
        Form contract("Planet Express Contract", false, 25, 25);

        std::cout << contract << std::endl;
        
        // El Profesor tiene grado 10, requiere grado 25. Debería poder firmar[cite: 172].
        std::cout << "Attempting to sign form..." << std::endl;
        chief.signForm(contract); // Esto llama internamente a beSigned() [cite: 175]

        // Verificamos que el estado del formulario cambió a "Signed Yes"
        std::cout << contract << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 13: Failed Form Signing (Grade Too Low) ~~~" << std::endl;
    try
    {
        Bureaucrat assistant("Fry", 150);
        Form contract("Important NDA", false, 50, 50);

        std::cout << contract << std::endl;

        // Fry tiene grado 150, requiere grado 50. Debería fallar[cite: 173].
        std::cout << "Attempting to sign form..." << std::endl;
        assistant.signForm(contract); // Lanza la excepción y es atrapada dentro de signForm() [cite: 175, 179]

        // El formulario debe seguir sin firmar
        std::cout << contract << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 14: Form Canonical Form Check ~~~" << std::endl;
    try
    {
        Form original("Original Form", false, 42, 42);
        Form clone(original);
        Form assigned;

        assigned = original;

        std::cout << "Original: " << original << std::endl;
        std::cout << "Clone:    " << clone << std::endl;
        std::cout << "Assigned: " << assigned << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 15: Grade Modification via Custom Blocks ~~~" << std::endl;
    try
    {
        Bureaucrat midManager("Hermes Conrad", 50);
        std::cout << midManager << std::endl;

        //  ---- Trying a big increment validations (from grade 50 to 30)   ----
        std::cout << "Promoting Hermes by 20 grades..." << std::endl;
        midManager.incrementGrade(20);
        std::cout << midManager << std::endl;

        //  ---- Trying a big degrading validations (from grade 30 to 80)   ----
        std::cout << "Degrading Hermes by 50 grades..." << std::endl;
        midManager.decrementGrade(50);
        std::cout << midManager << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 16: Custom Block Modification Out of Bounds ~~~" << std::endl;
    try
    {
        Bureaucrat elite("Elite Officer", 5);
        std::cout << elite << std::endl;

        //  ---- Trying promote 10 grades.Should be -5 (Ilegal)   ----
        std::cout << "Attempting to promote Elite Officer by 10 grades..." << std::endl;
        elite.incrementGrade(10); 
        std::cout << elite << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Catched expected exception: --> " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "~~~ Test 17: Attempting to Sign an Already Signed Form ~~~" << std::endl;
    try
    {
        Bureaucrat chief("Profesor", 1);
        Bureaucrat assistant("Fry", 150);
        Form importantContract("Planet Express Ownership", false, 10, 10);

        std::cout << importantContract << std::endl;

        //  ---- Frist Sign (should Succes) ----
        std::cout << "First attempt (Chief signs):" << std::endl;
        chief.signForm(importantContract);
        std::cout << importantContract << std::endl;

        //  ---- Second Sign (shouldn't Success)    ----
        std::cout << "\nSecond attempt (Assistant tries to sign already signed form):" << std::endl;
        assistant.signForm(importantContract);
    }
    catch(const std::exception& e)
    {
        std::cerr << "You Failed... Why?... --> "<< e.what() << '\n';
    }
    std::cout << std::endl;

    return (0);
}