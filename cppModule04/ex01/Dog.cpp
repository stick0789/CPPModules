/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:36:56 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:36:57 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog()/**/
{
    /* using this, change the type of animal.*/
    this->_type = "Dog";
    _dogBrain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    if (_dogBrain)
        delete _dogBrain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor" << std::endl;
    this->_dogBrain = new Brain();
    *this->_dogBrain = *other._dogBrain;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->_type = other._type;
        if (this->_dogBrain)
            *this->_dogBrain = *other._dogBrain;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

void	Dog::setBrainIdea(int index, std::string idea) const
{
	if (_dogBrain)
		_dogBrain->setIdeas(index, idea);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

void	Dog::getBrainIdea(int index) const
{
	if (_dogBrain)
		_dogBrain->getIdea(index);
	else
		std::cout << "This dog doesn't have a brain" << std::endl;
}

