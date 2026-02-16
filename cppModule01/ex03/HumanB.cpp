/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:09:22 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/16 20:09:24 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{   }

void    HumanB::setWeapon(Weapon &weaponB)
{
    this->weaponB = &weaponB;
}

void    HumanB::attack()
{
    /**
     * verify that the pointer isn't null before attack
     */
    if (this->weaponB)
    {
        std::cout << this->name << " Attacks with their " << this->weaponB->getType() << std::endl;
    }
    else
    {
        std::cout << this->name << " Has no weapon to attack with!!! RUNNNNN " << std::endl;
    }
}

HumanB::~HumanB()
{   }

