/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:28:47 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/24 17:28:48 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)/* using (ClapTrap(_name) we build first the father )*/
{
    /* using this, set the new points to the child scavtrap.*/
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this-> _attackDamage = 30;
    std::cout << "FragTrap the Child " << _name << " has been created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) /*Calling the fathers copy constructor*/
{
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other) {
        ClapTrap::operator=(other); /* calling the fathers operator*/
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " fiercely attacks " << target  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " Request for a High Five ¡¡¡¡LEGEND!!!! Wait For it... ¡¡¡¡DARYYYYYY....!!!!" << std::endl;
}
