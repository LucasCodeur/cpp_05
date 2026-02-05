/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 11:33:31 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <exception>

// static	void testConstructorShrubbery(void);
static	void testCopyConstructorShrubbery(void);

int	main(void)
{
	// testConstructorShrubbery();
	testCopyConstructorShrubbery();
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
	std::cout << test2 << std::endl;
}
