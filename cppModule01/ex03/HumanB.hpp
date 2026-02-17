/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:30:32 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/16 17:30:35 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

/**
 * Using pointer allow that humanN may not always have a weapon.
 */
class HumanB
{
    private:
        std::string name;
        Weapon *weaponB;
    public:
        /**
         * Constructor
         */
        HumanB(std::string name);

        /**
         * Member function
         */
        void    attack();
        void    setWeapon(Weapon &weapon);

        /**
         * Destructor
         */
        ~HumanB();
};

#endif

