#include "ScalarConverter.hpp"

void runTest(const std::string &literal)
{
    std::cout << ">>> Testing: [" << literal << "]" << std::endl;
    ScalarConverter::convert(literal);
    std::cout << std::endl;
}


int main(const int argc, const char **argv)
{
    if (argc == 2)
    {
        ScalarConverter::convert(argv[1]);
        return 0;
    }
    if (argc == 1)
    {
        std::cout << "==========================================" << std::endl;
        std::cout << "        SUITE DE PRUEBAS AUTOMÁTICA       " << std::endl;
        std::cout << "==========================================" << std::endl << std::endl;

        // 1. Ejemplos oficiales del sujeto de 42
        std::cout << "--- CASOS DEL SUJETO ---" << std::endl;
        runTest("0");
        runTest("nan");
        runTest("42.0f");

        // 2. Probar Caracteres (CHAR)
        std::cout << "--- PRUEBAS CON CHAR ---" << std::endl;
        runTest("'a'");
        runTest("a");
        runTest("*");
        runTest("'Z'");

        // 3. Probar Enteros (INT) y Límites
        std::cout << "--- PRUEBAS CON INT ---" << std::endl;
        runTest("42");
        runTest("-42");
        runTest("2147483647");  // INT_MAX
        runTest("-2147483648"); // INT_MIN
        runTest("2147483648");  // Overflow INT (Impossible para int)

        // 4. Probar Flotantes (FLOAT) y Pseudo-literales
        std::cout << "--- PRUEBAS CON FLOAT Y PSEUDO-LITERALES ---" << std::endl;
        runTest("-4.2f");
        runTest("42.42f");
        runTest("nanf");
        runTest("+inff");
        runTest("-inff");

        // 5. Probar Doubles (DOUBLE) y Pseudo-literales
        std::cout << "--- PRUEBAS CON DOUBLE Y PSEUDO-LITERALES ---" << std::endl;
        runTest("42.42");
        runTest("inf");
        runTest("-inf");

        // 6. Entradas inválidas
        std::cout << "--- ENTRADAS INVÁLIDAS ---" << std::endl;
        runTest("hola");
        runTest("42.42.42");
        runTest("42ff");

        return 0;
    }
    std::cout << "Usage: ./convert <scalar_literal>" << std::endl;
    return 1;
}