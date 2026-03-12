/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:37:26 by julian            #+#    #+#             */
/*   Updated: 2026/03/12 15:45:34 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
    
        std::string _type;

    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        virtual std::string getType() const;
        virtual void makeSound() const = 0;
        virtual Brain *getBrain() const;
};

class WrongAnimal
{
    protected:
    
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};


#endif