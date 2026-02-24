/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 20:19:04 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/23 20:19:06 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)/* using (ClapTrap(_name) we build first the father )*/
{
    /* using this, set the new points to the child scavtrap.*/
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this-> _attackDamage = 20;
    std::cout << "ScavTrap the Child " << _name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) /*Calling the fathers copy constructor*/
{
    std::cout << "ScavTrap copy constructor called for " << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other) {
        ClapTrap::operator=(other); /* calling the fathers operator*/
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " fiercely attacks " << target  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

