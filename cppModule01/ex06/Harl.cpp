/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:07:46 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/17 21:07:48 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

Harl::Harl()
{   }

void Harl::debug( void )
{
    std::cout << "DEBUG level: I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "INFO level: I cannot believe adding extra bacon costs more money. You didn't put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl::warning( void )
{
    std::cout << "WARNING level: I think I deserve to have some extra bacon for free. I've been \
coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "ERROR level: This is unacceptable! I want to speak to the manager now. "<< std::endl;
}

void Harl::complain( std::string level)
{
    /**
     * we use this to set the pointer to a member function.
     * void = type of return in the functions (debug, info, etc).
     * (Harl::* = indicate that is a pointer inside of the Harl class.
     * memberFunct[4]) = the name given to the pointer and the size of the array.
     * (void) = the parameters that recieve the function.
    */
    int i = 0;
    std::string lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while(i < 4 && lev[i] != level )
    {
        i++;
    }

    switch (i)
        {
        case 0:
            this->debug(); std::cout<<std::endl;
        case 1:
            this->info(); std::cout<<std::endl;
        case 2:
            this->warning(); std::cout<<std::endl;
        case 3:
            this->error(); std::cout<<std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
}

Harl::~Harl()
{   }

