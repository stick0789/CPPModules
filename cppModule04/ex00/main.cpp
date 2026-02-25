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

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "the 'j' animal is a:  " << j->getType() << " " << std::endl;
std::cout << "the 'i' animal is a:  " << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete i;
delete j;

const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* noCat = new WrongCat();
std::cout << noCat->getType() << " " << std::endl;
noCat->makeSound(); //will output the wrongMeta sound!
wrongMeta->makeSound();

delete wrongMeta;
delete noCat;

return 0;
}
