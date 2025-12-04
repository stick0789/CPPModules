/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChum.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:09:02 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/18 17:09:03 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	/*	--- to create  ---	*/
	Zombie normalZombie(name);

	/*	--- to annnounce the zombie ---	*/
	normalZombie.announce();

	std::cout << "The zombie have been Destroyed" << std::endl;
	/**
	 * in this case the object normalZombie is destroyed
	 * and it's memory set free automatically when the
	 * execution leaves the function randomChump
	 */
}