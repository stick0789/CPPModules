/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:36:06 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:36:07 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal 
{
    protected:
        std::string _type;
    public:
        AAnimal();
        virtual ~AAnimal();/*if we dont implement the destructor as virtual, don't delete fully the child*/
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &other);

        std::string getType() const;
        virtual void makeSound() const = 0;/*with this  (= 0) we made the abstract class*/
};



#endif

