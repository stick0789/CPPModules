/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:25:04 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/23 17:25:05 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CLAVTRAP_HPP
# define CLAVTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
    protected:/*with this, the childs of ClapTrap can saw and use the vars*/
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        /*Orthodox Canonical Form,*/
        ClapTrap();/*Constructor */
        ClapTrap(std::string _name);/*Constructor asked for the excercise*/
        ~ClapTrap();/*Destructor */
        ClapTrap(const ClapTrap &other);/* Default Copy Constructor*/
        ClapTrap &operator=(const ClapTrap &other); /* Default Copy Assigment Operator Constructor*/

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
