/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:24:55 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/23 17:24:56 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string _name) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0) /*Constructor initialized*/
{
    std::cout << "Default Constructor Called" << std::endl;
    std::cout << "ClapTrap " << _name << " is BORN!!!!!" <<std::endl;
}
ClapTrap::~ClapTrap()/*Destructor */
{
    std::cout << "Default Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Default Copy Constructor Called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Default Assigment Operator Called" << std::endl;
    /* Verify we arn't assigment to ourself (a == a)*/
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <=0 || _energyPoints <=0)
    {
        std::cout << "ClapTrap " << _name << " is out of commission and can't attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " Attacks " << target << " Causing " << _attackDamage << "Points of Damage"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " Take " << amount << "  Points of Damage! (Remaining HP : (" << _hitPoints << ")" << _name <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <=0 || _energyPoints <=0)
    {
        std::cout << "ClapTrap " << _name << " can't repair itself!" << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " Reapair itself, regaining " << amount << " hit points!, (Total HP :" <<_hitPoints << ")" << std::endl;
}
