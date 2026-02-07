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

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

static void t_make_form(void);

int	main(void)
{
	t_make_form();
	return (0);
}

static void t_make_form(void)
{
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "Test : t_make_form" << std::endl;
	Bureaucrat Albert;
	Intern	unknown;
	AForm*	test;
	
	test = unknown.makeForm("robotomy request", "Robot");
	Albert.executeForm(*test);
	delete test;
	std::cout << "--------------------------------------------------------" << std::endl;
	test = unknown.makeForm("shrubbery request", "Tree");
	Albert.executeForm(*test);
	delete test;
	std::cout << "--------------------------------------------------------" << std::endl;
	test = unknown.makeForm("presidential request", "President");
	Albert.executeForm(*test);
	delete test;
	test = NULL;
	std::cout << "--------------------------------------------------------" << std::endl;
	test = unknown.makeForm("blabla request", "blabla");
	if (test != NULL)
		Albert.executeForm(*test);
}
