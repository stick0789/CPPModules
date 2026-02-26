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

class Animal 
{
    protected:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();/*if we dont implement the destructor as virtual, don't delete fully the child*/
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);

        std::string getType() const;
        virtual void makeSound() const;/*with this (virtual) the compiler search in execution time whic animal is and execute the righ sound.*/
};



#endif

