/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:36:25 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:36:27 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat()/**/
{
    /* using this, change the type of animal.*/
    this->_type = "Cat";
    _catBrain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    if (_catBrain)
        delete _catBrain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat inherited copy constructor" << std::endl;
    this->_catBrain = new Brain();
    *this->_catBrain = *other._catBrain;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->_type = other._type;
        if (this->_catBrain)
            *this->_catBrain = *other._catBrain;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Woof! Woof! Ups, I Mean Meoww Meoww" << std::endl;
}


void	Cat::setBrainIdea(std::string idea) const
{
	if (_catBrain)
		_catBrain->setIdeas(idea);
	else
		std::cout << "This CAT doesn't have a brain" << std::endl;
}

void	Cat::getBrainIdea(int index) const
{
	if (_catBrain)
		_catBrain->getIdea(index);
	else
		std::cout << "This CAT doesn't have a brain" << std::endl;
}

