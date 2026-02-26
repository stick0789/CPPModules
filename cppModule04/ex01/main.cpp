/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:37:09 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/25 15:37:10 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << std::endl;
    std::cout << "--- THE MAIN BY DAFAULT ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    Animal* animals[10];
    std::cout << std::endl;
    std::cout << "--- CREATING THE ANIMALS ---" << std::endl;
    for (int a = 0; a < 5; a++)
		animals[a] = new Dog();
	for (int a = 5; a < 10; a++)
		animals[a] = new Cat();

    std::cout << std::endl;
    std::cout << "--- ANIMALS DOING SOUND ---" << std::endl;
    for (int a = 0; a < 10; a++)
	{
		std::cout << animals[a]->getType() << " " << std::endl;
		animals[a]->makeSound();
	}
    std::cout << std::endl;
    std::cout << "--- DELETING ANIMALS ---" << std::endl;
    for (int a = 0; a < 10; a++)
		delete animals[a];

    
    std::cout << std::endl;
    std::cout << "--- TESTING DEEP COPY ---" << std::endl;
    Dog originalDog;
    originalDog.setBrainIdea(0, "I want a bone.");
    Dog copiedDog = originalDog; // Invokes copy constructor

    originalDog.setBrainIdea(0, "Changed idea");

    std::cout << "Original Dog idea: " << std::endl;
    originalDog.getBrainIdea(0);
    std::cout << "Copied Dog idea: " << std::endl;
    copiedDog.getBrainIdea(0);

    std::cout << std::endl;
    std::cout << "--- TESTING DEEP COPY PART 2 ---" << std::endl;

    Dog real;
    real.setBrainIdea(0, "Idea A");
    real.setBrainIdea(1, "Idea B");

    Dog copy = real;
    real.setBrainIdea(0, "Idea A modificada");

    std::cout << "Copia Idea 0 (debe ser Idea A): ";
    copy.getBrainIdea(0);
    std::cout << "Copia Idea 1 (debe ser Idea B): ";
    copy.getBrainIdea(1);

    std::cout << "\nProgram finished without leaks.\n";

    return 0;
}
