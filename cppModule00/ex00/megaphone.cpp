/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:04:21 by jaacosta          #+#    #+#             */
/*   Updated: 2025/09/09 18:04:22 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //Library that allow me to use the cout
#include <cctype>

int main(int ac, char** av)
{
	char	*str;
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (int j = 0; str[j] != '\0'; j++)
			{
				str[j] = toupper(str[j]);
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
}


/**
 * A short introduction to the C++ World
 * std:: is the namespace prefix that tels the compiler to use objects from the standard library
 * cout is an object from the iostream library; the c means character and out is used to write to the console 
 * << is the insertion operator, it takes what is on its right "->" and inserts it into the output flow (cout), it can be used multiple times in the same line 
 * "My first Hello World in C++ 98!!" is the message that i want to show
 * std::endl represent the end of the line and moves the cursor to the next line in the console
 * ; marks the end of the instruction 
 * return 0; is the return value that indicates the program executed succesfully 
 */
// int main()
// {
//     std::cout << "My first Hello World in C++ 98!!" << std::endl;
//     return 0;
// }
