/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 13:41:55 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

static	void testConstructorShrubbery(void);
static	void testCopyConstructorShrubbery(void);
static	void testParameterizedConstructorShrubbery(void);
static	void testOperatorEqualShrubbery(void);

int	main(void)
{
	// testConstructorShrubbery();
	// testCopyConstructorShrubbery();
	// testParameterizedConstructorShrubbery();
	testOperatorEqualShrubbery();
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
	ShrubberyCreationForm	test("Albert", true);

	std::cout << test << std::endl;
}

static	void testOperatorEqualShrubbery(void)
{
	ShrubberyCreationForm	test("Albert", true);
	ShrubberyCreationForm	test1("Albert", false);

	std::cout << test << std::endl;
	std::cout << test1 << std::endl;
	test = test1;
	std::cout << test << std::endl;
}
