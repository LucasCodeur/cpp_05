/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:43:50 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 16:03:52 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("John", 72, 45, false)
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

RobotomyRequestForm::RobotomyRequestForm(const std::string _name) : AForm(_name, 72, 45, false)
{
	std::cout << this->getName() << " RobotomyRequestForm Parameterized Constructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try 
	{
		this->checkRequirements(executor);
	}
	catch (AForm::FormNotSigned &e)
	{
		std::cout << "Error: Form not signed" << std::endl;
		return ;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Error: Grade of bureaucrat isn't enough" << std::endl;
		return ;
	}
	srand(time(0));
	int temp =  std::rand() % 2;
	std::cout << "Makes some drilling noises " << std::endl;
	if (temp == 0)
		std::cout << executor.getName() << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomy of " << executor.getName() << " failed" << std::endl;
}
