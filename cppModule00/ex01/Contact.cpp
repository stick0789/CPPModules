/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 20:07:04 by jaacosta          #+#    #+#             */
/*   Updated: 2025/09/10 20:07:06 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    "Contact.hpp"

/**
 * Construct implementation
 */
Contact::Contact()
{
    firstName = "";
}

/**
 * To verify is the contact is empty
 */
bool Contact::isEmpty() const
{
    return firstName.empty();
}

/**
 * The logic to add the info of the contact
 */
void    Contact::inputInfo()
{
    std::string input;
    std::cout << "--- New Contact ---"  << std::endl;

    /**
     * Using the Do While verify that the field isn't empty
     */
    do
    {
        std::cout << "  First Name:  ";
        std::getline(std::cin, input);
    } while (input.empty());
    firstName = input;
    do
    {
        std::cout << "  Last Name:  ";
        std::getline(std::cin, input);
    } while (input.empty());
    lastName = input;
    do
    {
        std::cout << "  Nickname:  ";
        std::getline(std::cin, input);
    } while (input.empty());
    nickName = input;
    do
    {
        std::cout << "  Phone Number:  ";
        std::getline(std::cin, input);
    } while (input.empty());
    phoneNumber = input;
    do
    {
        std::cout << "  Darkest Secret:  ";
        std::getline(std::cin, input);
    } while (input.empty());
    darkSecret = input;

    std::cout << "---Contact Saved Successfully---"  << std::endl;
}

void    Contact::displayInfo() const
{
    std::cout << std::endl << "--- Detalle del Contacto ---"  << std::endl;
    std::cout << "  Primer Nombre: " << firstName << std::endl;
    std::cout << "  Apellido: " << lastName << std::endl;
    std::cout << "  Apodo: " << nickName << std::endl;
    std::cout << "  Numero de Telefono: " << phoneNumber << std::endl;
    std::cout << "  Secreto Oscuro: " << darkSecret << std::endl;
    std::cout << "----------------------------\n";    
}

std::string Contact::getField(int index) const
{
    if (index == 1)
        return firstName;
    if (index == 2)
        return lastName;
    if (index == 3)
        return nickName;
    return "";
}
