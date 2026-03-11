/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:39:50 by julian            #+#    #+#             */
/*   Updated: 2026/03/11 17:44:33 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal() 
{
    _type = "Animal";
    std::cout << "Animal created" << std::endl;
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

Brain *Animal::CreateBrain()
{
    Brain* brain = new Brain();
    return brain;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const 
{
    std::cout << "Animal makes a sound" << std::endl;
}
