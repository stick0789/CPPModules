/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:37:03 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:37:04 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();/*Constructor by defaultFOC*/
        Dog(const Dog &other);/* Copy constructor FOC*/
        Dog &operator=(const Dog &other);/*Copy Assigment Constructor FOC*/
        virtual ~Dog();/*Destructor FOC*/

        virtual void makeSound() const;
};

#endif
