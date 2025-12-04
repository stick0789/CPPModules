/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:51:21 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/24 18:51:24 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

/**
 * Color Definitions ~Just For Fun~
 */
/**
 * Caracter de escape (033 en octal)
 */
const std::string ESC = "\033[";

/** 
 *  Colores de Primer Plano
 */
const std::string ROJO   = ESC + "31m";
const std::string VERDE  = ESC + "32m";
const std::string AZUL   = ESC + "34m";

/** 
 *  Restablecer
 */
const std::string RESET  = ESC + "0m";


class Zombie
{
private:
    std::string name;
public:
    /**
     * Constructor
     */
    Zombie();
    

    /**
     * Member function
     */
    void    announce(void);

    /**
     * Setter
     */
    void    setName(std::string name);
    /**
     * Destructor
     */
    ~Zombie();
};

/**
 *  --- External Functions
 */
/** ---To create the zombie horde---   */
Zombie* zombieHorde(int N, std::string name);

/*	---To Create on the Heap---	*/
Zombie* newZombie(std::string name);

#endif

