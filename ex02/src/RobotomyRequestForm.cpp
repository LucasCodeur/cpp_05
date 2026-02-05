/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:43:50 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 14:41:12 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("John", 145, 137, false)
{
	std::cout << this->getName() << " RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->getName() << " RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
	std::cout << this->getName() << " RobotomyRequestForm Copy Constructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		this->setAFormSigned(other.getAFormSigned());
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _name) : AForm(_name, 145, 137, false)
{
	std::cout << this->getName() << " RobotomyRequestForm Parameterized Constructor called" << std::endl;
}
