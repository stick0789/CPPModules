#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Constructor called of Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Constructor called of Brain" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
}


// Destructor
Brain::~Brain()
{
	std::cout << "Destructor called of Brain" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return (*this);
}

void Brain::setIdeas(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
    {
        this->_ideas[index] = idea;
        std::cout << "Idea " << index << " set in Brain" << std::endl;
    }
    else
        std::cout << "Invalid index for setting idea" << std::endl;
}

void Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		std::cout << "The idea number " << index << " is: " << _ideas[index] << std::endl;
	else
		std::cout << "There is no such idea. choose an index between 0 and 99." << std::endl;
}

