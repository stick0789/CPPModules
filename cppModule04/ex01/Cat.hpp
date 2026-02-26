/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:36:42 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:36:44 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _catBrain;

    public:
        Cat();/*Constructor by defaultFOC*/
        Cat(const Cat &other);/* Copy constructor FOC*/
        Cat &operator=(const Cat &other);/*Copy Assigment Constructor FOC*/
        virtual ~Cat();/*Destructor FOC use the virtual is a good practice but not necessary*/

        virtual void makeSound() const;
        void	setBrainIdea(int index, std::string idea) const;
        void	getBrainIdea(int index) const;

};

#endif

