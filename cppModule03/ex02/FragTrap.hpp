/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:28:39 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/24 17:28:41 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();/*Constructor by defaultFOC*/
        FragTrap(std::string _name); /*Constructor required in the exercise*/
        FragTrap(const FragTrap &other);/* Copy constructor FOC*/
        FragTrap &operator=(const FragTrap &other);/*Copy Assigment Constructor FOC*/
        ~FragTrap();/*Destructor FOC*/

        void attack(const std::string &target);/*replace the function of the father*/
        void highFivesGuys(void);/*function required*/
};

#endif
