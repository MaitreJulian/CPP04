/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:23:48 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 15:28:28 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat created" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    _brain = new Brain(*other._brain);
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;

    if (this != &other)
    {
        Animal::operator=(other);

        delete _brain;
        _brain = new Brain(*other._brain);
    }

    return *this;
}

std::string Cat::getType() const
{
    return _type;
}

void Cat::makeSound() const
{
    delete _brain;
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return _brain;
}

std::string Cat::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "Index out of bounds" << std::endl;
        return "Nope, this cat is brainless";
    }
    return _brain->getIdea(index);  
}



