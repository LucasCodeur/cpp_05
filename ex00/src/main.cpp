/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:07:41 by lud-adam          #+#    #+#             */
/*   Updated: 2026/01/28 18:35:08 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <exception>

static void	t_create_bureaucrat(void);
static void	t_create_bureaucrat_by_parameters(std::string name, unsigned short int grade);
static void	t_throw_exception();
static void	t_throw_bureaucrat_too_high_grade_exception();
static void	t_try_builtInsType(void);
static void	t_decremente_and_incremente_grade(int grade);
static void	t_print_grade(int grade);

int	main(void)
{
	t_create_bureaucrat();
	t_create_bureaucrat_by_parameters("George", 150);
	t_throw_exception();
	t_try_builtInsType();
	t_throw_bureaucrat_too_high_grade_exception();
	t_decremente_and_incremente_grade(150);
	t_print_grade(2);
	return (0);
}

static void	t_create_bureaucrat(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_create_bureaucrat" << std::endl;
	Bureaucrat	test;
	std::cout << test.getName() << std::endl;
	std::cout << test.getGrade() << std::endl;
	std::cout << std::endl;
}

static void	t_create_bureaucrat_by_parameters(std::string name, unsigned short int grade)
{

	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : create_bureaucrat_by_parameters" << std::endl;
	Bureaucrat	test(name, grade);
	std::cout << test.getName() << std::endl;
	std::cout << test.getGrade() << std::endl;
	std::cout << std::endl;
}

static int	compare(int a, int b);

static void	t_throw_exception()
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : throw exception" << std::endl;
	try 
	{
		compare(-20, 20);
	}
	catch (const std::invalid_argument& e)
	{
		std::cout << "Invalid arguments" << std::endl;
	}
	std::cout << std::endl;
}

static int	compare(int a, int b)
{
	if (a < 0 || b < 0)
		throw std::invalid_argument("received negative value");
	return (0);
}

static void	t_try_builtInsType(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : try builtInsType" << std::endl;
	int	x = 7;
	try 
	{
		if (x == 7)
			throw -1;
	}
	catch (int error)
	{
		if (error == -1)
			std::cout << error << std::endl;
	}
	std::cout << std::endl;
}

static void	t_throw_bureaucrat_too_high_grade_exception()
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_throw_bureaucrat_too_high_grade_exception" << std::endl;
	try
	{
		Bureaucrat	test("Thierry", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void	t_decremente_and_incremente_grade(int grade)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : Decremente and incremente grade" << std::endl;
	try
	{
		Bureaucrat	test("Thierry", grade);
		std::cout << "Name :" << test.getGrade() << " Grade :" << test.getGrade() << std::endl;
		test.incrementGrade();
		std::cout << "Name :" << test.getGrade() << " Grade :" << test.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void	t_print_grade(int grade)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : print grade" << std::endl;
	try
	{
		Bureaucrat	test("Thierry", grade);
		// test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
