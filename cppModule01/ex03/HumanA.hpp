/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:29:36 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/16 17:29:38 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

/**
 * Using reference, grantizes that humanA will always be armed.
 * due to a reference can't be empty or null
 */
class HumanA
{
    private:
        std::string name;
        Weapon &weaponA;
    public:
        /**
         * Constructor
         */
        HumanA(std::string name, Weapon &weaponA);

        /**
         * Member function
         */
        void    attack();

        /**
         * Destructor
         */
        ~HumanA();
};

#endif