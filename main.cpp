/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:37:02 by julian            #+#    #+#             */
/*   Updated: 2026/03/11 16:11:34 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "========== Animal ============" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;
    
    std::cout << "========== WrongAnimal ============" << std::endl;
    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* iWrong = new WrongCat();

    std::cout << std::endl;

    std::cout << iWrong->getType() << " " << std::endl;
    iWrong->makeSound();
    metaWrong->makeSound();

    std::cout << std::endl;

    delete metaWrong;
    delete iWrong;

    return 0;
}