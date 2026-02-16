/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:58:45 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/16 19:58:47 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : name(name), weaponA(weaponA)
{

}

void    HumanA::attack()
{
    /**
     * 
     */
    std::cout << this->name << " Attacks with their " << this->weaponA.getType() << std::endl;
}

HumanA::~HumanA()
{   }

