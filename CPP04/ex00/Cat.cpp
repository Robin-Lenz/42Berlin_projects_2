/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:54 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:26:09 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &a) : Animal(a.type)
{
	std::cout << "Cat copyconstructor called" << std::endl;
	*this = a;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &a){
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

void Cat::makeSound()const{
	std::cout << this->getType() << " Meow !" << std::endl;
}

