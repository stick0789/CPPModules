/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:25:09 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/23 17:25:11 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    /*ClapTrap kyle("Eric Cartman");
    ClapTrap cartman("Kyle Broflovski");

    kyle.attack(" Kenny ");
    cartman.takeDamage(5);
    cartman.beRepaired(3);

    std::cout << "\n--- Energy Exhaustion Test ---" << std::endl;
    for (int i = 0; i < 10; i++) {
        kyle.attack("a christian guy");
    }

    std::cout << "\n--- Death and Repair Test ---" << std::endl;
    cartman.takeDamage(20); // this shoud end in  0 HP
    cartman.beRepaired(10); // shoudn't reapir itself cause is death
    cartman.attack("an enemy"); // coudn't attack*/
    std::cout << "--- CREATING SCAV ---" << std::endl;
    ScavTrap scav("Scavvy");

    std::cout << "--- CREATING FRAG ---" << std::endl;
    FragTrap fraggy("Fraggy");

    std::cout << "\n--- TESTING ACTIONS FOR SCAV---" << std::endl;
    scav.attack("an intruder");
    scav.guardGate();
    scav.takeDamage(50);
    scav.beRepaired(20);
    std::cout << "\n--- TESTING ACTIONS FOR FRAG---" << std::endl;
    fraggy.attack("a bully");
    fraggy.highFivesGuys();
    fraggy.takeDamage(60);
    fraggy.beRepaired(30);


    std::cout << "\n--- DESTROYING ---" << std::endl;
    return 0;
}