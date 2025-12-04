/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:52:04 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/24 18:52:07 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "Zombie";
    std::cout << AZUL << "1 " << this->name << " Is BORN ~~ FOR THE HORDE ~~ " << RESET << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
    std::cout << VERDE << "The zombie's name is: " << this->name << RESET << std::endl;
}

Zombie::~Zombie()
{
    std::cout << ROJO << this->name << " Zombie... Destroyed " << RESET << std::endl;
}
