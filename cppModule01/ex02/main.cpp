/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:25:08 by jaacosta          #+#    #+#             */
/*   Updated: 2025/12/04 19:25:10 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

int main()
{
    std::string normalString = "HI THIS IS BRAIN";;
    std::string *stringPTR = &normalString;
    std::string &stringREF = normalString;

    std::cout << " the string memory address is " << &normalString << std::endl;
    std::cout << " the stringPTR memory address is " << stringPTR << std::endl;
    std::cout << " the stringREF memory address is " << &stringREF << std::endl;
    
    std::cout << " the value of the string is " << normalString << std::endl;
    std::cout << " the value pointed to stringPTR is " << *stringPTR << std::endl;
    std::cout << " the value pointed to stringREF is " << stringREF << std::endl;

    
    return (0);
}
