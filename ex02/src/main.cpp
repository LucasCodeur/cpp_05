/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 17:42:58 by lud-adam         ###   ########.fr       */
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
static	void testRobotomyConstructors(void);
static	void testPresidentialConstructors(void);

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
	// testRobotomyConstructors();
	testPresidentialConstructors();
	return (0);
}

static	void testConstructorShrubbery(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testConstructorShrubbery" << std::endl;
	ShrubberyCreationForm	test;
	std::cout << test << std::endl;
}

static	void testCopyConstructorShrubbery(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testCopyConstructorShrubbery" << std::endl;
	ShrubberyCreationForm	test;

	std::cout << test << std::endl;
	test.setAFormSigned(true);
	ShrubberyCreationForm	test2(test);
	std::cout << "test2" << std::endl;	
	std::cout << test2 << std::endl;
}

static	void testParameterizedConstructorShrubbery(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testParameterizedConstructorShrubbery" << std::endl;
	ShrubberyCreationForm	test("Albert");

	std::cout << test << std::endl;
}

static	void testOperatorEqualShrubbery(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testOperatorEqualShrubbery" << std::endl;
	ShrubberyCreationForm	test("Albert");
	ShrubberyCreationForm	test1("Albert");

	std::cout << test << std::endl;
	std::cout << test1 << std::endl;
	test = test1;
	std::cout << test << std::endl;
}

static void testAsciiTreeFormShruberry(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testAsciiTreeFormShruberry" << std::endl;
	ShrubberyCreationForm	test("Albert");
	test.createTrees("Mojo_tree");
}

static void	testRand(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testRand" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::rand() % 2 << std::endl;
	}
}

static void testRandomMessage(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testRandomMessage" << std::endl;
	RobotomyRequestForm	test("Albert");
	test.Robotomy("Bob");
}

static void testPardonPresidential(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "testPardonPresidential" << std::endl;
	PresidentialPardonForm test;

	test.pardoned("Bob");
}

static void	testRobotomyConstructors(void)
{
	std::cout << "testRobotomyConstructors" << std::endl;
	RobotomyRequestForm test3;
	std::cout << test3 << std::endl;
	RobotomyRequestForm test4("Mario");
	std::cout << test4 << std::endl;
	RobotomyRequestForm test5(test4);
	std::cout << test5 << std::endl;
	RobotomyRequestForm test10;
	std::cout << test10 << std::endl;
	test10 = test4;
	std::cout << test10 << std::endl;
}

static void	testPresidentialConstructors(void)
{
	std::cout << "testPresidentialConstructors" << std::endl;
	PresidentialPardonForm test3;
	std::cout << test3 << std::endl;
	PresidentialPardonForm test4("Mario");
	std::cout << test4 << std::endl;
	PresidentialPardonForm test5(test4);
	std::cout << test5 << std::endl;
	PresidentialPardonForm test10;
	std::cout << test10 << std::endl;
	test10 = test4;
	std::cout << test10 << std::endl;
}
