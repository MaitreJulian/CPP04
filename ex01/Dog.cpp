/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:49:16 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/11 17:50:22 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other);

        delete _brain;
        _brain = new Brain(*other._brain);
    }

    return *this;
}

std::string Dog::getType() const
{
    return _type;
}

void Dog::makeSound() const
{
    delete _brain;
    std::cout << "Woof!" << std::endl;
}