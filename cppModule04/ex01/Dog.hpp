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
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _dogBrain;

    public:
        Dog();/*Constructor by defaultFOC*/
        Dog(const Dog &other);/* Copy constructor FOC*/
        Dog &operator=(const Dog &other);/*Copy Assigment Constructor FOC*/
        virtual ~Dog();/*Destructor FOC*/

        virtual void makeSound() const;
        void	setBrainIdea(int index, std::string idea) const;
        void	getBrainIdea(int index) const;
};

#endif
