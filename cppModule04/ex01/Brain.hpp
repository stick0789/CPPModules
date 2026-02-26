#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);


		void setIdeas(const std::string idea);
		void getIdea(int index) const;
	private:
		std::string _ideas[100];
		
};

#endif