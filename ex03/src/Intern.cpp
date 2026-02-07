/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:20:20 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 17:28:11 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "Intern Copy Constructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::Intern(std::string _useless)
{
	(void)_useless;
	std::cout << "Intern Parameterized Constructor called" << std::endl;
}

void	Intern::free_all(AForm* ptr, AForm** ptrs)
{
	for (int i = 0; i < 3; i++)
	{
		if (ptr != ptrs[i])
			delete ptrs[i];
	}
}

AForm* Intern::makeForm(std::string nameForm, std::string nameTarget)
{
	std::string forms[] = {"robotomy request", "shrubbery request", "presidential request"};
	AForm*					differentForm[3];

	differentForm[0] = new RobotomyRequestForm(nameTarget);
	differentForm[1] = new ShrubberyCreationForm(nameTarget);
	differentForm[2] = new PresidentialPardonForm(nameTarget);
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == nameForm)
		{ 
			std::cout << "Intern creates :" << differentForm[i]->getName() << std::endl;
			free_all(differentForm[i], differentForm);
			return (differentForm[i]);
		}
	}
	free_all(NULL, differentForm);
	std::cout << "Form not exist" << std::endl;
	return (NULL);
}


