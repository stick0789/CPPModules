/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:16:45 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/17 17:16:47 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <fstream>
#include <sstream> // to reading the file with std::stringstream

std::string ft_replace(std::string content, std::string s1, std::string s2)
{
    std::string result;
    size_t pos = 0;
    size_t match;

    while(true)
    {
        match = content.find(s1, pos); /*search the actual position*/

        if (match == std::string::npos)/* break is theres no more coincidences */
            break;
        
        result += content.substr(pos, match-pos);
        result += s2;

        pos = match + s1.length();
    }
    result += content.substr(pos);

    return (result);
}

int ft_open(std::string filename, std::string s1, std::string s2)
{
    std::ifstream input(filename.c_str()); /*input file stream to  read*/
    if (!input.is_open())
    {
        std::cout << "Error: Could not open file " << filename << std::endl;
        return (0);
    }
    std::stringstream buffer;
    buffer << input.rdbuf(); /* put all the content of the file in buffer like append*/
    std::string content = buffer.str(); /*cast the buffer into a string*/
    input.close();

    std::string finalResult = ft_replace(content, s1, s2);

    std::string outfile = filename + ".replace";
    std::ofstream output(outfile.c_str()); /*output file stream to create the file*/
    if (!output.is_open())
    {
        std::cout << "Error: Could not create the file" << std::endl;
        return (0);
    }
    output << finalResult;
    output.close();
    return (1);
}

int parse_input(int argc, char **argv, std::string &filename, std::string &s1, std::string &s2)
{
    if (argc != 4)
    {
        std::cout << "Error: Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return (0);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    
    if (filename.empty() || s1.empty())
    {
        std::cout << "Error: Filename and S1 can't be empty" << std::endl;
        return (0);
    }
    return (1);
}

int main(int argc, char **argv)
{
    std::string filename, s1, s2;
    //std::string s1;
    //std::string s2;

    if (!parse_input(argc, argv, filename, s1, s2))
        return (1);
    if (!ft_open(filename, s1, s2))
        return (1);
    
    std::cout << "Success: " << filename << ".replace created." << std::endl;
    return (0);

}
