/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:52:17 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/24 18:52:19 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    /**
     * Verification of the N number of Zombies
     */
    if(N <= 0)
    {
        std::cout << " The number must be positive... DAHHH BRAINZzzzz " << std::endl;
        return NULL;
    }

    /**
     * Assign memory for the zombies
     */
    Zombie* hordeZombie = new Zombie[N];

    /**
     * do the for and set the name for every Zombie created
     */
    for(int i = 0; i < N; i++)
        hordeZombie[i].setName(name);
    return (hordeZombie);

}
