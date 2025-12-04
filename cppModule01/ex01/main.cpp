/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:51:51 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/24 18:51:58 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main()
{
    Zombie* zombieT;

    zombieT = zombieHorde(3, "Thrall");
    for (int i = 0; i < 3; i++)
        zombieT->announce();
    delete[] zombieT;
    return (0);
}

