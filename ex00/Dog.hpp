/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:45:23 by julian            #+#    #+#             */
/*   Updated: 2026/01/15 01:48:04 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : Animal
{
    public :
        Dog();
        ~Dog();
        
        void makeSound();
        
}

#endif