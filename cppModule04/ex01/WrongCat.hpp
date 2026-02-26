/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 16:30:41 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 16:30:43 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();/*Constructor by defaultFOC*/
        WrongCat(const WrongCat &other);/* Copy constructor FOC*/
        WrongCat &operator=(const WrongCat &other);/*Copy Assigment Constructor FOC*/
        ~WrongCat();/*Destructor FOC*/

        void makeSound() const;

};


#endif

