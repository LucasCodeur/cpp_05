/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 17:31:41 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <cstdlib>

static	void testConstructorShrubbery(void);
static	void testCopyConstructorShrubbery(void);
static	void testParameterizedConstructorShrubbery(void);
static	void testOperatorEqualShrubbery(void);
static	void testAsciiTreeFormShruberry(void);
static	void testRand(void);
static	void testRandomMessage(void);
static	void testPardonPresidential(void);

int	main(void)
{
	// testConstructorShrubbery();
	// testCopyConstructorShrubbery();
	// testParameterizedConstructorShrubbery();
	// testOperatorEqualShrubbery();
	// testAsciiTreeFormShruberry();
	// testRand();
	// testRandomMessage();
	// testPardonPresidential();
	return (0);
}

static	void testConstructorShrubbery(void)
{
	ShrubberyCreationForm	test;
	std::cout << test << std::endl;
}

static	void testCopyConstructorShrubbery(void)
{
	ShrubberyCreationForm	test;

	std::cout << test << std::endl;
	test.setAFormSigned(true);
	ShrubberyCreationForm	test2(test);
	std::cout << "test2" << std::endl;	
	std::cout << test2 << std::endl;
}

static	void testParameterizedConstructorShrubbery(void)
{
	ShrubberyCreationForm	test("Albert");

	std::cout << test << std::endl;
}

static	void testOperatorEqualShrubbery(void)
{
	ShrubberyCreationForm	test("Albert");
	ShrubberyCreationForm	test1("Albert");

	std::cout << test << std::endl;
	std::cout << test1 << std::endl;
	test = test1;
	std::cout << test << std::endl;
}

static void testAsciiTreeFormShruberry(void)
{
	ShrubberyCreationForm	test("Albert");
	test.createTrees("Mojo_tree");
}

static void	testRand(void)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::rand() % 2 << std::endl;
	}
}

static void testRandomMessage(void)
{
	RobotomyRequestForm	test("Albert");
	test.Robotomy("Bob");
}

static void testPardonPresidential(void)
{
	PresidentialPardonForm test;

	test.pardoned("Bob");
}

static void	testConstructors(void)
{
	ShrubberyCreationForm test1;
	PresidentialPardonForm test2;
	RobotomyRequestForm test3;
}
