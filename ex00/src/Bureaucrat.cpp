/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:52:31 by lud-adam          #+#    #+#             */
/*   Updated: 2026/01/28 18:35:15 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <exception>

Bureaucrat::Bureaucrat(void) : _name("John Doe"), _grade(150)
{
	std::cout << "Default Constructor of Bureaucrat called" << std::endl;
	if (_grade > 150)
			throw Bureaucrat::GradeTooHighException();
	else if (_grade < 1)
			throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string &_name, short int _grade) : _name(_name), _grade(_grade)
{
	std::cout << "Parameterized Constructor of Bureaucrat called" << std::endl;
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Copy Constructor of Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Deconstructor of Bureaucrat called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return (*this);
}

const std::string &Bureaucrat::getName(void) const
{
	return (this->_name);
}

short int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
}
