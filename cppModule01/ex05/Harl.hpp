/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:07:37 by jaacosta          #+#    #+#             */
/*   Updated: 2026/02/17 21:07:39 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

class Harl
{
    private:
        /**
         * Member function
         */
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
            /**
         * Constructor
         */
        Harl();

        /**
         * Member function
         */
        void complain( std::string level );

        /**
         * Destructor
         */
        ~Harl();
};

