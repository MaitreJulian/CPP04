/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:49:16 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 16:02:54 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog created" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;

    if (this != &other)
    {
        AAnimal::operator=(other);

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
    std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() const
{
    return _brain;
}

std::string Dog::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "Index out of bounds" << std::endl;
        return "";
    }
    return _brain->getIdea(index);
}

