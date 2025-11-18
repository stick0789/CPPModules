/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:08:40 by jaacosta          #+#    #+#             */
/*   Updated: 2025/11/18 17:08:42 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		/*	Private Attribute*/
		std::string name;
	public:
		/**
		 *	Constructor
		*/
		Zombie(std::string name);

		/**
		 * Member Function
		 */
		void	announce(void);

		/**
		 * Destructor
		 */
		~Zombie();
};

/**
 *	---External Functions---
 */
/*	---To Create on the Heap---	*/
Zombie* newZombie(std::string name);

/*	---To Create on the Stack---	*/
void	randomChump(std::string name);


#endif


