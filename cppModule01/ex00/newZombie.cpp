/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:08:23 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/18 17:08:25 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	/*	--- this to create and name the zombie ---	*/
	Zombie* ptrZombie = new  Zombie(name);

	/*	--- this to announce the zombie ---	*/
	//ptrZombie->announce();

	/*	--- this to return the pointer ---	*/
	return ptrZombie;

	/**
	 * in this case the  object ptrZombie exists til 
	 * someone called the function delete to the ptrZombie
	 * in this way the duty to release the memory belongs
	 * to the code when newZombie is called.
	 */
}