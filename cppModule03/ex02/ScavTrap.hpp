/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 20:18:58 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/23 20:19:00 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap /*this mean ScavTrap will have all the functions of ClapTrap*/
{
    public:
        ScavTrap();/*Constructor by defaultFOC*/
        ScavTrap(std::string _name); /*Constructor required in the exercise*/
        ScavTrap(const ScavTrap &other);/* Copy constructor FOC*/
        ScavTrap &operator=(const ScavTrap &other);/*Copy Assigment Constructor FOC*/
        ~ScavTrap();/*Destructor FOC*/

        void attack(const std::string &target);/*replace the function of the father*/
        void guardGate();/*function required*/
};

#endif