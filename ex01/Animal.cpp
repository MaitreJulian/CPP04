/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:39:50 by julian            #+#    #+#             */
/*   Updated: 2026/03/12 16:13:28 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal() 
{
    _type = "Animal";
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
    std::cout << "Animal copied" << std::endl;
}

Animal& Animal::operator=(const Animal& other) 
{
    std::cout << "Animal assigned" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const 
{
    std::cout << "Animal makes a sound" << std::endl;
}
