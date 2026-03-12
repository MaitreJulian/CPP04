/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:36:05 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 16:05:16 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // AAnimal a; // Cannot instantiate an abstract class
    // AAnimal* b = new AAnimal();

    AAnimal* a = new Dog();
    AAnimal* b = new Cat();

    a->makeSound();
    b->makeSound();

    delete a;
    delete b;

    return 0;
}