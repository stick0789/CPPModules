/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:12:59 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/16 17:13:01 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
    std::string type;
public:
    /**
     * Constructor
     */
    Weapon(std::string type);

    /**
     * Getter
     */
    const std::string   &getType();
    /**S
     * Setter
     */
    void    setType(std::string type);
    /**
     * Destructor
     */
    ~Weapon();
};

#endif
