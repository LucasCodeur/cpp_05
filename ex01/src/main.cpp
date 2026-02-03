/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/03 15:22:35 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <exception>

static void	t_form_constructor(void);
static void	t_form_operator_equal(void);
static void	t_form_higher_grade(void);
static void	t_form_signed_function(void);

int	main(void)
{
	// t_form_constructor();
	// t_form_operator_equal();
	// t_form_higher_grade();
	t_form_signed_function();
	return (0);
}

static void	t_form_constructor(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_form_constructor" << std::endl;
	Form	test1;
	std::cout << test1 << std::endl;
	Form	test2("form1", 1, 2, false);
	std::cout << test2 << std::endl;
	Form	test3(test2);
	std::cout << test3 << std::endl;
}

static void	t_form_operator_equal(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_form_operator_equal" << std::endl;
	Form	test1;
	std::cout << test1 << std::endl;
	Form	test2("Form42", 10, 20, true);
	std::cout << test2 << std::endl;
	test1 = test2;
	std::cout << test1 << std::endl;
}

static void	t_form_higher_grade(void)
{
	try
	{
		Form	test2("Form42", 0, 20, true);
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cout << "Error to high" << std::endl;
	}
}

static void	t_form_signed_function(void)
{
	try
	{
		Bureaucrat	test1("Bob", 1);
		Form	test2("Form42", 1, 1, false);
		std::cout << test2 << std::endl;
		test2.beSigned(test1);
		std::cout << test2 << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << "Error\n";
	}
}
